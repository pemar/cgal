// Copyright (c) 1999  Martin-Luther-University Halle-Wittenberg (Germany).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you may redistribute it under
// the terms of the Q Public License version 1.0.
// See the file LICENSE.QPL distributed with CGAL.
//
// Licensees holding a valid commercial license may use this file in
// accordance with the commercial license agreement provided with the software.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $Source$
// $Revision$ $Date$
// $Name$
//
// Author(s)     : Matthias Baesken, Algorithmic Solutions


#ifndef CGAL_WINDOW_STRING_MANIP_H
#define CGAL_WINDOW_STRING_MANIP_H

#if defined(CGAL_USE_CGAL_HEADERS)
#include <CGAL/basic.h>
#endif

#include <string>
#include <list>

namespace CGAL {


extern  std::list<std::string>  break_into_words(std::string s);
/*{\Mfunc   returns the list of words (separated by white space) of |s|. }*/

extern  std::list<std::string>  break_into_lines(std::string s);
/*{\Mfunc   returns the list of lines (separated by newline) of |s|. }*/

}

#endif

