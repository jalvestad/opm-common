/*
  Copyright (c) 2018 Statoil ASA

  This file is part of the Open Porous Media project (OPM).

  OPM is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  OPM is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with OPM.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef OPM_AGGREGATE_GROUP_DATA_HPP
#define OPM_AGGREGATE_GROUP_DATA_HPP

#include <opm/output/data/Wells.hpp>
#include <opm/output/eclipse/CharArrayNullTerm.hpp>
#include <opm/output/eclipse/WindowedArray.hpp>
#include <opm/parser/eclipse/EclipseState/Schedule/Schedule.hpp>
#include <opm/parser/eclipse/EclipseState/Schedule/Group.hpp>

#include <string>
#include <vector>

namespace Opm {
    class Phases;
    class Schedule;
    class Group;
} // Opm

namespace Opm { namespace RestartIO { namespace Helpers {

    class AggregateGroupData
    {
    public:
        std::vector< const Group* > currentGroups(Opm::Schedule& sched, size_t reportStep);
	std::map <std::string, int>  currentGroupIndex(Opm::Schedule& sched, size_t reportStep);
	std::map <std::string, int>  currentWellIndex(Opm::Schedule& sched, size_t rptStep);
	
#if 0        
	explicit AggregateGroupData(const std::vector<int>& inteHead);

        void captureDeclaredGroupData(const Opm::Schedule& sched,
                                     const std::size_t    rptStep);

        void captureDynamicGroupData(const Opm::Phases&          phases,
                                    const Opm::Schedule&        sched,
                                    const std::size_t           rptStep,
                                    const Opm::data::WellRates& wRates);
#endif
        /// Retrieve Integer Well Data Array.
        const std::vector<int>& getIGroup() const
        {
            return this->iGroup_.data();
        }

        /// Retrieve Floating-Point (Real) Well Data Array.
        const std::vector<float>& getSGroup() const
        {
            return this->sGroup_.data();
        }

        /// Retrieve Floating-Point (Double Precision) Well Data Array.
        const std::vector<double>& getXGroup() const
        {
            return this->xGroup_.data();
        }

        /// Retrieve Character Well Data Array.
        const std::vector<CharArrayNullTerm<8>>& getZGroup() const
        {
            return this->zGroup_.data();
        }

    private:
        /// Aggregate 'IWEL' array (Integer) for all wells.
        WindowedArray<int> iGroup_;

        /// Aggregate 'SWEL' array (Real) for all wells.
        WindowedArray<float> sGroup_;

        /// Aggregate 'XWEL' array (Double Precision) for all wells.
        WindowedArray<double> xGroup_;

        /// Aggregate 'ZWEL' array (Character) for all wells.
        WindowedArray<CharArrayNullTerm<8>> zGroup_;

        /// Maximum number of wells in a group.
        int nWGMax_;
	/// Maximum number of groups
	int nGMaxz_;
    };

}}} // Opm::RestartIO::Helpers

#endif // OPM_AGGREGATE_WELL_DATA_HPP
