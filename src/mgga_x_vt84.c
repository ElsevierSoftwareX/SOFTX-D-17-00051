/*
 Copyright (C) 2015 Susi Lehtola

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

#define XC_MGGA_X_VT84          541 /* meta-GGA version of VT{8,4} GGA */

#include "maple2c/mgga_x_vt84.c"

#define func maple2c_func
#include "work_mgga_x.c"

const xc_func_info_type xc_func_info_mgga_x_vt84 = {
  XC_MGGA_X_VT84,
  XC_EXCHANGE,
  "meta-GGA version of VT{8,4} GGA",
  XC_FAMILY_MGGA,
  {&xc_ref_Campo2012_179, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC,
  1e-23,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, NULL, work_mgga_x,
};
