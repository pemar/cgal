// Copyright (c) 2000  Max-Planck-Institute Saarbrucken (Germany).
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
// Author(s)     : Susan Hert <hert@mpi-sb.mpg.de>

#ifndef PARTITION_TRAITS_2_H
#define PARTITION_TRAITS_2_H

#include <CGAL/Polygon_2.h>
#include <CGAL/Partition_traits_2_base.h>
#include <CGAL/polygon_function_objects.h>
#include <list>

namespace CGAL {

template <class Kernel_>
class Partition_traits_2  : public Partition_traits_2_base<Kernel_>
{
  private:
    typedef Kernel_                                     Kernel;
    typedef Partition_traits_2<Kernel_>                 Self;
  public:
    typedef typename Kernel::Point_2                    Point_2;
    typedef ::std::list<Point_2>                        Container;
    typedef CGAL::Polygon_2<Kernel, Container>          Polygon_2;
    typedef typename Kernel::Less_yx_2                  Less_yx_2;
    typedef typename Kernel::Less_xy_2                  Less_xy_2;
    typedef typename Kernel::Left_turn_2                 Left_turn_2;
    typedef typename Kernel::Orientation_2              Orientation_2;
    typedef typename Kernel::Compare_y_2                Compare_y_2;
    typedef typename Kernel::Compare_x_2                Compare_x_2;
    typedef CGAL::Is_convex_2<Self>                     Is_convex_2;
    typedef CGAL::Is_y_monotone_2<Self>                 Is_y_monotone_2;

    // needed by Indirect_edge_compare, used in y_monotone and greene_approx
    typedef typename Kernel::Line_2                     Line_2;
    typedef typename Kernel::Construct_line_2           Construct_line_2;
    typedef typename Kernel::Compare_x_at_y_2           Compare_x_at_y_2;
    typedef typename Kernel::Is_horizontal_2            Is_horizontal_2;

    // needed by visibility graph and thus by optimal convex
    typedef typename Kernel::Ray_2                      Ray_2; 
    typedef typename Kernel::Collinear_are_ordered_along_line_2
                                            Collinear_are_ordered_along_line_2;
    typedef typename Kernel::Are_strictly_ordered_along_line_2
                                            Are_strictly_ordered_along_line_2;
    typedef typename Kernel::Intersect_2                Intersect_2;
    typedef typename Kernel::Assign_2                   Assign_2;
    typedef typename Kernel::Object_2                   Object_2;

    // needed by approx_convex (for constrained triangulation)
    // and optimal convex (for vis. graph)
    typedef typename Kernel::Segment_2                  Segment_2;
    // needed by optimal convex (for vis. graph)
    typedef typename Kernel::Construct_segment_2        Construct_segment_2;
    typedef typename Kernel::Construct_ray_2            Construct_ray_2;

 
    Construct_line_2
    construct_line_2_object() const
    {  return Construct_line_2(); }

    Compare_x_at_y_2
    compare_x_at_y_2_object() const
    { return Compare_x_at_y_2(); }

    Construct_segment_2
    construct_segment_2_object() const
    { return Construct_segment_2(); }

    Construct_ray_2
    construct_ray_2_object() const
    { return Construct_ray_2(); }

    Collinear_are_ordered_along_line_2
    collinear_are_ordered_along_line_2_object() const
    { return Collinear_are_ordered_along_line_2(); }

    Are_strictly_ordered_along_line_2
    are_strictly_ordered_along_line_2_object() const
    { return Are_strictly_ordered_along_line_2(); }

    Is_horizontal_2
    is_horizontal_2_object() const
    {  return Is_horizontal_2(); }

    Is_convex_2
    is_convex_2_object(const Self& traits) const
    {  return Is_convex_2(traits); }

    Is_y_monotone_2
    is_y_monotone_2_object(const Self& traits) const
    {  return Is_y_monotone_2(traits); }

    Intersect_2
    intersect_2_object() const
    {  return Intersect_2(); }

    Assign_2
    assign_2_object() const
    {  return Assign_2(); }
};

}

#endif // PARTITION_TRAITS_2_H
