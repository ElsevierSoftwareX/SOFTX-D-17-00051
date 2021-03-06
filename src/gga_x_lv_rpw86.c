/*
 Copyright (C) 2006-2007 M.A.L. Marques

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

#define XC_GGA_X_LV_RPW86 58 /* Berland and Hyldgaard */

#include "maple2c/gga_x_lv_rpw86.c"

#define func xc_gga_x_lv_rpw86_enhance
#include "work_gga_x.c"

const xc_func_info_type xc_func_info_gga_x_lv_rpw86 = {
  XC_GGA_X_LV_RPW86,
  XC_EXCHANGE,
  "Berland and Hyldgaard",
  XC_FAMILY_GGA,
  {&xc_ref_Berland2014_035412, NULL, NULL, NULL, NULL},
  XC_FLAGS_3D | XC_FLAGS_HAVE_EXC | XC_FLAGS_HAVE_VXC | XC_FLAGS_HAVE_FXC | XC_FLAGS_HAVE_KXC,
  1e-24,
  0, NULL, NULL,
  NULL, NULL, 
  NULL, work_gga_x, NULL
};
