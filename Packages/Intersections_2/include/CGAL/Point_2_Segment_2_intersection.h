
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
// Author(s)     : Geert-Jan Giezeman


#ifndef CGAL_POINT_2_SEGMENT_2_INTERSECTION_H
#define CGAL_POINT_2_SEGMENT_2_INTERSECTION_H

#include <CGAL/Segment_2.h>
#include <CGAL/Point_2.h>
#include <CGAL/Object.h>

CGAL_BEGIN_NAMESPACE

namespace CGALi {

template <class K>
inline 
bool
do_intersect(const typename CGAL_WRAP(K)::Point_2 &pt, 
	     const typename CGAL_WRAP(K)::Segment_2 &seg,
	     const K&)
{
    return seg.has_on(pt);
}

template <class K>
inline 
bool
do_intersect(const typename CGAL_WRAP(K)::Segment_2 &seg,
	     const typename CGAL_WRAP(K)::Point_2 &pt, 
	     const K&)
{
    return seg.has_on(pt);
}


template <class K>
inline
Object
intersection(const typename CGAL_WRAP(K)::Point_2 &pt, 
	     const typename CGAL_WRAP(K)::Segment_2 &seg, 
	     const K&)
{
    if (do_intersect(pt,seg)) {
        return make_object(pt);
    }
    return Object();
}

template <class K>
inline
Object
intersection( const typename CGAL_WRAP(K)::Segment_2 &seg, 
	      const typename CGAL_WRAP(K)::Point_2 &pt, 
	      const K&)
{
    if (do_intersect(pt,seg)) {
        return make_object(pt);
    }
    return Object();
}

} // namespace CGALi


template <class K>
inline bool
do_intersect(const Segment_2<K> &seg, const Point_2<K> &pt)
{
    return CGALi::do_intersect(pt, seg, K());
}

template <class K>
inline bool
do_intersect(const Point_2<K> &pt, const Segment_2<K> &seg)
{
    return CGALi::do_intersect(pt, seg, K());
}


template <class K>
inline Object
intersection(const Segment_2<K> &seg, const Point_2<K> &pt)
{
    return CGALi::intersection(pt, seg, K());
}

template <class K>
inline Object
intersection(const Point_2<K> &pt, const Segment_2<K> &seg)
{
    return CGALi::intersection(pt, seg, K());
}

CGAL_END_NAMESPACE

#endif
