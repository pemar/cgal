// Copyright (c) 1998  ETH Zurich (Switzerland).
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
// Author(s)     : Gabriele Neyer<neyer@inf.ethz.ch>
#ifndef __R_tree_external_db_H__
#define __R_tree_external_db_H__
#include<CGAL/IO_tree_traits.h>
#include<CGAL/cache.h>

CGAL_BEGIN_NAMESPACE

template<const unsigned int buffersize>
class R_tree_external_db:public CGAL::IO_tree_traits
                        <CGAL::cache<buffersize> >{};

CGAL_END_NAMESPACE
#endif
