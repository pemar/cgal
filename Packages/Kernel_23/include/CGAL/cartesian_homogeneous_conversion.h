// Copyright (c) 1999  Utrecht University (The Netherlands),
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
// Author(s)     : Stefan Schirra
 

#ifndef CGAL_CARTESIAN_HOMOGENEOUS_CONVERSION_H
#define CGAL_CARTESIAN_HOMOGENEOUS_CONVERSION_H

CGAL_BEGIN_NAMESPACE

template <class RT>
Point_2< Cartesian<RT> >
homogeneous_to_cartesian(const Point_2< Homogeneous<RT> >& hp)
{
  return
  Point_2< Cartesian<RT> >(hp.hx(), hp.hy(), hp.hw() );
}

template <class RT>
Point_2< Homogeneous<RT> >
cartesian_to_homogeneous(const Point_2< Cartesian<RT> >& cp)
{
  return
  Point_2< Homogeneous<RT> >(cp.hx(), cp.hy());
}

template <class RT>
Point_3< Cartesian<RT> >
homogeneous_to_cartesian(const Point_3< Homogeneous<RT> >& hp)
{
  return
  Point_3< Cartesian<RT> >(hp.hx(), hp.hy(), hp.hz(), hp.hw() );
}

template <class RT>
Point_3< Homogeneous<RT> >
cartesian_to_homogeneous(const Point_3< Cartesian<RT> >& cp)
{
  return
  Point_3< Homogeneous<RT> >(cp.hx(), cp.hy(), cp.hz() );
}

template <class RT>
Point_2< Cartesian<Quotient<RT> > >
homogeneous_to_quotient_cartesian(
  const Point_2<Homogeneous<RT> >& hp)
{
  typedef Quotient<RT>  QT;
  return Point_2< Cartesian<QT> >( QT( hp.hx(), hp.hw() ),
                                             QT( hp.hy(), hp.hw() ) );
}

template <class RT>
Point_2< Homogeneous<RT> >
quotient_cartesian_to_homogeneous(
  const Point_2< Cartesian< Quotient<RT> > >& cp)
{
  typedef Point_2<Homogeneous<RT> >  HPoint;
  if ( cp.x().denominator() != cp.y().denominator() )
  {
      return HPoint( cp.x().numerator()  * cp.y().denominator(),
                     cp.y().numerator()  * cp.x().denominator(),
                     cp.x().denominator()* cp.y().denominator());
  }
  else
  {
      return HPoint( cp.x().numerator(),
                     cp.y().numerator(),
                     cp.x().denominator());
  }
}

template <class RT>
Point_3< Cartesian<Quotient<RT> > >
homogeneous_to_quotient_cartesian(
  const Point_3<Homogeneous<RT> >& hp)
{
  typedef Quotient<RT>  QT;
  return Point_3< Cartesian<QT> >( QT( hp.hx(), hp.hw() ),
                                             QT( hp.hy(), hp.hw() ),
                                             QT( hp.hz(), hp.hw() ) );
}

template <class RT>
Point_3< Homogeneous<RT> >
quotient_cartesian_to_homogeneous(
  const Point_3< Cartesian< Quotient<RT> > >& cp)
{
  typedef Point_3<Homogeneous<RT> >  HPoint;
  if (  (cp.x().denominator() != cp.y().denominator() )
      ||(cp.x().denominator() != cp.z().denominator() ) )
  {
      return
      HPoint(cp.x().numerator()  *cp.y().denominator()*cp.z().denominator(),
             cp.y().numerator()  *cp.x().denominator()*cp.z().denominator(),
             cp.z().numerator()  *cp.x().denominator()*cp.y().denominator(),
             cp.x().denominator()*cp.y().denominator()*cp.z().denominator());
  }
  else
  {
      return HPoint( cp.x().numerator(),
                     cp.y().numerator(),
                     cp.z().numerator(),
                     cp.x().denominator());
  }
}

CGAL_END_NAMESPACE


#endif // CGAL_CARTESIAN_HOMOGENEOUS_CONVERSION_H
