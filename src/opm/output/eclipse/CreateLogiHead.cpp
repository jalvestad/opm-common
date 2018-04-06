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

#include <opm/output/eclipse/LogiHEAD.hpp>

#include <opm/parser/eclipse/EclipseState/EclipseState.hpp>
#include <opm/parser/eclipse/EclipseState/Runspec.hpp>

//#include <algorithm>
//#include <chrono>
#include <ctime>
#include <vector>

namespace {
} 
// Anonymous

// #####################################################################
// Public Interface (createLogiHead()) Below Separator
// ---------------------------------------------------------------------

std::vector<bool>
Opm::RestartIO::Helpers::
createLogiHead(const EclipseState& es)
{
    const auto& rspec = es.runspec();
    const auto& wsd = rspec.wellSegmentDimensions();
    

    const auto lh = LogiHEAD{}
	.variousParam(false, false, wsd.maxSegmentedWells())
	;

    return lh.data();
}
