// Copyright (c) 2000  Utrecht University (The Netherlands),
// ETH Zurich (Switzerland), Freie Universitaet Berlin (Germany),
// INRIA Sophia-Antipolis (France), Martin-Luther-University Halle-Wittenberg
// (Germany), Max-Planck-Institute Saarbrucken (Germany), RISC Linz (Austria),
// and Tel-Aviv University (Israel).  All rights reserved.
//
// This file is part of CGAL (www.cgal.org); you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License as
// published by the Free Software Foundation; version 2.1 of the License.
// See the file LICENSE.LGPL distributed with CGAL.
//
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
//
// $Source$
// $Revision$ $Date$
// $Name$
//
// Author(s)     : Herve Bronnimann

#ifndef CGAL_CARTESIAN_PREDICATES_ON_DIRECTIONS_2_H
#define CGAL_CARTESIAN_PREDICATES_ON_DIRECTIONS_2_H

CGAL_BEGIN_NAMESPACE

template < class K >
inline
bool
equal_direction(const DirectionC2<K> &d1,
                const DirectionC2<K> &d2)
{
  return equal_directionC2(d1.dx(), d1.dy(), d2.dx(), d2.dy());
}

template < class K >
inline
Comparison_result
compare_angle_with_x_axis(const DirectionC2<K> &d1,
                          const DirectionC2<K> &d2)
{
  return K().compare_angle_with_x_axis_2_object()(d1, d2);
}

CGAL_END_NAMESPACE

#endif // CGAL_CARTESIAN_PREDICATES_ON_DIRECTIONS_2_H
