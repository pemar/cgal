// Copyright (c) 1997-2000  Utrecht University (The Netherlands),
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
// Author(s)     : Radu Ursu


#ifndef CGAL_QT_WIDGET_CONSTRAINED_TRIANGULATION_2_H
#define CGAL_QT_WIDGET_CONSTRAINED_TRIANGULATION_2_H

#include <CGAL/IO/Qt_widget.h>
#include <CGAL/Constrained_triangulation_2.h>

namespace CGAL{

template < class Gt, class Tds>
Qt_widget&
operator<<(Qt_widget& w,  const Constrained_triangulation_2<Gt,Tds> &t)
{
  w.lock();
  t.draw_triangulation(w);
  w.unlock();
  return w;
}

}//end namespace CGAL

#endif
