// -*-c++-*-

/*
 *Copyright:

 Copyright (C) Hiroki SHIMORA

 This code is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 3, or (at your option)
 any later version.

 This code is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this code; see the file COPYING.  If not, write to
 the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

 *EndCopyright:
 */

/////////////////////////////////////////////////////////////////////

#ifndef PASS_CHECKER_H
#define PASS_CHECKER_H

#include "predict_state.h"

namespace rcsc {
class AbstractPlayerObject;
class Vector2D;
}

class PassChecker {

protected:
    virtual
    ~PassChecker()
      { }

public:
    virtual
    bool operator()( const PredictState & state,
                     const rcsc::AbstractPlayerObject & from,
                     const rcsc::AbstractPlayerObject & to,
                     const rcsc::Vector2D & receive_point,
                     const double & first_ball_speed ) const = 0;
};

#endif
