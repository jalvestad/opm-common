/*
  Copyright 2018 Statoil IT

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

#define BOOST_TEST_MODULE LogiHEAD_Vector

#include <boost/test/unit_test.hpp>

#include <opm/output/eclipse/LogiHEAD.hpp>

#include <array>
#include <initializer_list>

BOOST_AUTO_TEST_SUITE(Member_Functions)

BOOST_AUTO_TEST_CASE(Dimensions_Individual)
{
    const auto lh = Opm::RestartIO::LogiHEAD{}
        .variousParam(false, true, 4) ;

    const auto& v = lh.data();

    BOOST_CHECK_EQUAL(v[  0], true); // 
    BOOST_CHECK_EQUAL(v[  1], true); // 
    BOOST_CHECK_EQUAL(v[  3], false); //
    BOOST_CHECK_EQUAL(v[  4], true); //
    BOOST_CHECK_EQUAL(v[ 16], true); //
    BOOST_CHECK_EQUAL(v[ 18], true); //
    BOOST_CHECK_EQUAL(v[ 31], true); //
    BOOST_CHECK_EQUAL(v[ 44], true); //
    BOOST_CHECK_EQUAL(v[ 75], true); //
    BOOST_CHECK_EQUAL(v[ 76], true); //
    BOOST_CHECK_EQUAL(v[ 87], true); //
    BOOST_CHECK_EQUAL(v[ 99], true); //
    BOOST_CHECK_EQUAL(v[113], true); //
    BOOST_CHECK_EQUAL(v[114], true); //
    BOOST_CHECK_EQUAL(v[115], true); //
    BOOST_CHECK_EQUAL(v[117], true); //
    
}


BOOST_AUTO_TEST_SUITE_END()
