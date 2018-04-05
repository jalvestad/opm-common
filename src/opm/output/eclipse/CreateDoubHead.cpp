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

#include <opm/output/eclipse/WriteRestartHelpers.hpp>

#include <opm/output/eclipse/DoubHEAD.hpp>

#include <opm/parser/eclipse/EclipseState/Schedule/Schedule.hpp>

#include <chrono>
#include <cstddef>
#include <vector>

namespace {
    Opm::RestartIO::DoubHEAD::TimeStamp
    computeTimeStamp(const ::Opm::Schedule& sched,
                     const double           elapsed)
    {
        return {
            std::chrono::system_clock::from_time_t(sched.getStartTime()),
            std::chrono::duration<
                double, std::chrono::seconds::period>{ elapsed },
        };
    }
} // Anonymous

// #####################################################################
// Public Interface (createDoubHead()) Below Separator
// ---------------------------------------------------------------------

std::vector<double>
Opm::RestartIO::Helpers::
createDoubHead(const Schedule&   sched,
               const std::size_t rptStep,
               const double      simTime)
{
    const auto dh = DoubHEAD{}
        .tuningParameters(sched.getTuning(), rptStep)
        .timeStamp       (computeTimeStamp(sched, simTime))
	.drsdt(sched, rptStep)
	;

    return dh.data();
}
