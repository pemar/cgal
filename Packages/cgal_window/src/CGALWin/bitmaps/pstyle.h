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

#define pstyle_width  30
#define pstyle_height 11
#define pstyle_num     7

#define box_point_width 30
#define box_point_height 11
static unsigned char box_point_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0x00, 0xfc, 0x07, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0x00, 0xfc, 0x07, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0x00, 0xfc, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00};
#define circle_point_width 30
#define circle_point_height 11
static unsigned char circle_point_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00,
   0x00, 0x08, 0x02, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00,
   0x00, 0x04, 0x04, 0x00, 0x00, 0x08, 0x02, 0x00, 0x00, 0x10, 0x01, 0x00,
   0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define cross_point_width 30
#define cross_point_height 11
static unsigned char cross_point_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x02, 0x00,
   0x00, 0x10, 0x01, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
   0x00, 0xa0, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x08, 0x02, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define disc_point_width 30
#define disc_point_height 11
static unsigned char disc_point_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00,
   0x00, 0xf8, 0x03, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0x00, 0xfc, 0x07, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x00, 0xf0, 0x01, 0x00,
   0x00, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define pixel_point_width 30
#define pixel_point_height 11
static unsigned char pixel_point_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00,
   0x00, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define plus_point_width 30
#define plus_point_height 11
static unsigned char plus_point_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
   0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x00,
   0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define rect_point_width 30
#define rect_point_height 11
static unsigned char rect_point_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00, 0x00, 0x04, 0x04, 0x00,
   0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00,
   0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00, 0x00, 0x04, 0x04, 0x00,
   0x00, 0xfc, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00};
