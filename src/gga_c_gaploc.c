/*
 Copyright (C) 2008 Georg Madsen

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU Lesser General Public License as published by
 the Free Software Foundation; either version 3 of the License, or
 (at your option) any later version.
  
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU Lesser General Public License for more details.
  
 You should have received a copy of the GNU Lesser General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "util.h"

#define XC_GGA_C_GAPLOC  556 /* Gaploc */

#include "maple2c/gga_c_gaploc.c"

#define func maple2c_func
#include "work_gga_c.c"

const xc_func_info_type xc_func_info_gga_c_gaploc = {
  XC_GGA_C_GAPLOC,
  XC_CORRELATION,
  "Gaploc",
  XC_FAMILY_GGA,
  {&xc_ref_Fabiano2014_2016, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-18,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, work_gga_c, NULL
};
