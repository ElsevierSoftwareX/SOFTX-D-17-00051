/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/mgga_c_lp90.mpl
  Type of functional: work_mgga_c
*/

void xc_mgga_c_lp90_func
  (const xc_func_type *p, xc_mgga_work_c_t *r)
{
  double t1, t4, t5, t6, t7, t11, t12, t13;
  double t14, t17, t18, t19, t21, t23, t24, t25;
  double t28, t29, t31, t32, t35, t41, t48, t50;
  double t52, t54, t67, t70, t73, t79;


  t1 = r->xt * r->xt;
  t4 = 0.1e1 / 0.2e1 + r->z / 0.2e1;
  t5 = POW_1_3(t4);
  t6 = t5 * t5;
  t7 = t6 * t4;
  t11 = 0.1e1 / 0.2e1 - r->z / 0.2e1;
  t12 = POW_1_3(t11);
  t13 = t12 * t12;
  t14 = t13 * t11;
  t17 = 0.80569e0 + 0.37655000000000000000e-3 * t1 - 0.37655000000000000000e-3 * r->us[0] * t7 - 0.37655000000000000000e-3 * r->us[1] * t14;
  t18 = POW_1_3(0.3e1);
  t19 = t18 * t18;
  t21 = POW_1_3(0.4e1);
  t23 = POW_1_3(0.1e1 / 0.31415926535897932385e1);
  t24 = 0.1e1 / t23;
  t25 = t21 * t24;
  t28 = r->rs * t19 * t25 / 0.3e1 + 0.40743e-2;
  t29 = 0.1e1 / t28;
  r->f = -t17 * t29;

  if(r->order < 1) return;

  t31 = t28 * t28;
  t32 = 0.1e1 / t31;
  t35 = t19 * t21 * t24;
  r->dfdrs = t17 * t32 * t35 / 0.3e1;
  t41 = -0.31379166666666666667e-3 * r->us[0] * t6 + 0.31379166666666666667e-3 * r->us[1] * t13;
  r->dfdz = -t41 * t29;
  r->dfdxt = -0.75310000000000000000e-3 * r->xt * t29;
  r->dfdxs[0] = 0.0e0;
  r->dfdxs[1] = 0.0e0;
  r->dfdts[0] = 0.0e0;
  r->dfdts[1] = 0.0e0;
  r->dfdus[0] = 0.37655000000000000000e-3 * t7 * t29;
  r->dfdus[1] = 0.37655000000000000000e-3 * t14 * t29;

  if(r->order < 2) return;

  t48 = 0.1e1 / t31 / t28;
  t50 = t21 * t21;
  t52 = t23 * t23;
  t54 = t18 * t50 / t52;
  r->d2fdrs2 = -0.2e1 / 0.3e1 * t17 * t48 * t54;
  r->d2fdrsz = t41 * t32 * t35 / 0.3e1;
  r->d2fdrsxt = 0.25103333333333333333e-3 * r->xt * t32 * t35;
  r->d2fdrsxs[0] = 0.0e0;
  r->d2fdrsxs[1] = 0.0e0;
  r->d2fdrsts[0] = 0.0e0;
  r->d2fdrsts[1] = 0.0e0;
  r->d2fdrsus[0] = -0.12551666666666666667e-3 * t7 * t32 * t35;
  r->d2fdrsus[1] = -0.12551666666666666667e-3 * t14 * t32 * t35;
  t67 = 0.1e1 / t5;
  t70 = 0.1e1 / t12;
  t73 = -0.10459722222222222222e-3 * r->us[0] * t67 - 0.10459722222222222222e-3 * r->us[1] * t70;
  r->d2fdz2 = -t73 * t29;
  r->d2fdzxt = 0.0e0;
  r->d2fdzxs[0] = 0.0e0;
  r->d2fdzxs[1] = 0.0e0;
  r->d2fdzts[0] = 0.0e0;
  r->d2fdzts[1] = 0.0e0;
  r->d2fdzus[0] = 0.31379166666666666667e-3 * t6 * t29;
  r->d2fdzus[1] = -0.31379166666666666667e-3 * t13 * t29;
  r->d2fdxt2 = -0.75310000000000000000e-3 * t29;
  r->d2fdxtxs[0] = 0.0e0;
  r->d2fdxtxs[1] = 0.0e0;
  r->d2fdxtts[0] = 0.0e0;
  r->d2fdxtts[1] = 0.0e0;
  r->d2fdxtus[0] = 0.0e0;
  r->d2fdxtus[1] = 0.0e0;
  r->d2fdxs2[0] = 0.0e0;
  r->d2fdxs2[1] = 0.0e0;
  r->d2fdxs2[2] = 0.0e0;
  r->d2fdxsts[0] = 0.0e0;
  r->d2fdxsts[1] = 0.0e0;
  r->d2fdxsts[2] = 0.0e0;
  r->d2fdxsts[3] = 0.0e0;
  r->d2fdxsus[0] = 0.0e0;
  r->d2fdxsus[1] = 0.0e0;
  r->d2fdxsus[2] = 0.0e0;
  r->d2fdxsus[3] = 0.0e0;
  r->d2fdts2[0] = 0.0e0;
  r->d2fdts2[1] = 0.0e0;
  r->d2fdts2[2] = 0.0e0;
  r->d2fdtsus[0] = 0.0e0;
  r->d2fdtsus[1] = 0.0e0;
  r->d2fdtsus[2] = 0.0e0;
  r->d2fdtsus[3] = 0.0e0;
  r->d2fdus2[0] = 0.0e0;
  r->d2fdus2[1] = 0.0e0;
  r->d2fdus2[2] = 0.0e0;

  if(r->order < 3) return;

  t79 = t31 * t31;
  r->d3fdrs3 = 0.8e1 * t17 / t79 * 0.31415926535897932385e1;
  r->d3fdrs2z = -0.2e1 / 0.3e1 * t41 * t48 * t54;
  r->d3fdrsz2 = t73 * t32 * t35 / 0.3e1;
  r->d3fdrszxt = 0.0e0;
  r->d3fdrszxs[0] = 0.0e0;
  r->d3fdrszxs[1] = 0.0e0;
  r->d3fdrszts[0] = 0.0e0;
  r->d3fdrszts[1] = 0.0e0;
  r->d3fdrszus[0] = -0.10459722222222222222e-3 * t6 * t32 * t35;
  r->d3fdrszus[1] = 0.10459722222222222222e-3 * t13 * t32 * t35;
  r->d3fdrs2xt = -0.50206666666666666667e-3 * r->xt * t48 * t54;
  r->d3fdrsxt2 = 0.25103333333333333333e-3 * t32 * t19 * t25;
  r->d3fdrsxtxs[0] = 0.0e0;
  r->d3fdrsxtxs[1] = 0.0e0;
  r->d3fdrsxtts[0] = 0.0e0;
  r->d3fdrsxtts[1] = 0.0e0;
  r->d3fdrsxtus[0] = 0.0e0;
  r->d3fdrsxtus[1] = 0.0e0;
  r->d3fdrs2xs[0] = 0.0e0;
  r->d3fdrs2xs[1] = 0.0e0;
  r->d3fdrsxs2[0] = 0.0e0;
  r->d3fdrsxs2[1] = 0.0e0;
  r->d3fdrsxs2[2] = 0.0e0;
  r->d3fdrsxsts[0] = 0.0e0;
  r->d3fdrsxsts[1] = 0.0e0;
  r->d3fdrsxsts[2] = 0.0e0;
  r->d3fdrsxsts[3] = 0.0e0;
  r->d3fdrsxsus[0] = 0.0e0;
  r->d3fdrsxsus[1] = 0.0e0;
  r->d3fdrsxsus[2] = 0.0e0;
  r->d3fdrsxsus[3] = 0.0e0;
  r->d3fdrs2ts[0] = 0.0e0;
  r->d3fdrs2ts[1] = 0.0e0;
  r->d3fdrsts2[0] = 0.0e0;
  r->d3fdrsts2[1] = 0.0e0;
  r->d3fdrsts2[2] = 0.0e0;
  r->d3fdrstsus[0] = 0.0e0;
  r->d3fdrstsus[1] = 0.0e0;
  r->d3fdrstsus[2] = 0.0e0;
  r->d3fdrstsus[3] = 0.0e0;
  r->d3fdrs2us[0] = 0.25103333333333333333e-3 * t7 * t48 * t54;
  r->d3fdrs2us[1] = 0.25103333333333333333e-3 * t14 * t48 * t54;
  r->d3fdrsus2[0] = 0.0e0;
  r->d3fdrsus2[1] = 0.0e0;
  r->d3fdrsus2[2] = 0.0e0;
  r->d3fdz3 = -(0.17432870370370370370e-4 * r->us[0] / t5 / t4 - 0.17432870370370370370e-4 * r->us[1] / t12 / t11) * t29;
  r->d3fdz2xt = 0.0e0;
  r->d3fdzxt2 = 0.0e0;
  r->d3fdzxtxs[0] = 0.0e0;
  r->d3fdzxtxs[1] = 0.0e0;
  r->d3fdzxtts[0] = 0.0e0;
  r->d3fdzxtts[1] = 0.0e0;
  r->d3fdzxtus[0] = 0.0e0;
  r->d3fdzxtus[1] = 0.0e0;
  r->d3fdz2xs[0] = 0.0e0;
  r->d3fdz2xs[1] = 0.0e0;
  r->d3fdzxs2[0] = 0.0e0;
  r->d3fdzxs2[1] = 0.0e0;
  r->d3fdzxs2[2] = 0.0e0;
  r->d3fdzxsts[0] = 0.0e0;
  r->d3fdzxsts[1] = 0.0e0;
  r->d3fdzxsts[2] = 0.0e0;
  r->d3fdzxsts[3] = 0.0e0;
  r->d3fdzxsus[0] = 0.0e0;
  r->d3fdzxsus[1] = 0.0e0;
  r->d3fdzxsus[2] = 0.0e0;
  r->d3fdzxsus[3] = 0.0e0;
  r->d3fdz2ts[0] = 0.0e0;
  r->d3fdz2ts[1] = 0.0e0;
  r->d3fdzts2[0] = 0.0e0;
  r->d3fdzts2[1] = 0.0e0;
  r->d3fdzts2[2] = 0.0e0;
  r->d3fdztsus[0] = 0.0e0;
  r->d3fdztsus[1] = 0.0e0;
  r->d3fdztsus[2] = 0.0e0;
  r->d3fdztsus[3] = 0.0e0;
  r->d3fdz2us[0] = 0.10459722222222222222e-3 * t67 * t29;
  r->d3fdz2us[1] = 0.10459722222222222222e-3 * t70 * t29;
  r->d3fdzus2[0] = 0.0e0;
  r->d3fdzus2[1] = 0.0e0;
  r->d3fdzus2[2] = 0.0e0;
  r->d3fdxt3 = 0.0e0;
  r->d3fdxt2xs[0] = 0.0e0;
  r->d3fdxt2xs[1] = 0.0e0;
  r->d3fdxtxs2[0] = 0.0e0;
  r->d3fdxtxs2[1] = 0.0e0;
  r->d3fdxtxs2[2] = 0.0e0;
  r->d3fdxtxsts[0] = 0.0e0;
  r->d3fdxtxsts[1] = 0.0e0;
  r->d3fdxtxsts[2] = 0.0e0;
  r->d3fdxtxsts[3] = 0.0e0;
  r->d3fdxtxsus[0] = 0.0e0;
  r->d3fdxtxsus[1] = 0.0e0;
  r->d3fdxtxsus[2] = 0.0e0;
  r->d3fdxtxsus[3] = 0.0e0;
  r->d3fdxt2ts[0] = 0.0e0;
  r->d3fdxt2ts[1] = 0.0e0;
  r->d3fdxtts2[0] = 0.0e0;
  r->d3fdxtts2[1] = 0.0e0;
  r->d3fdxtts2[2] = 0.0e0;
  r->d3fdxttsus[0] = 0.0e0;
  r->d3fdxttsus[1] = 0.0e0;
  r->d3fdxttsus[2] = 0.0e0;
  r->d3fdxttsus[3] = 0.0e0;
  r->d3fdxt2us[0] = 0.0e0;
  r->d3fdxt2us[1] = 0.0e0;
  r->d3fdxtus2[0] = 0.0e0;
  r->d3fdxtus2[1] = 0.0e0;
  r->d3fdxtus2[2] = 0.0e0;
  r->d3fdxs3[0] = 0.0e0;
  r->d3fdxs3[1] = 0.0e0;
  r->d3fdxs3[2] = 0.0e0;
  r->d3fdxs3[3] = 0.0e0;
  r->d3fdxs2ts[0] = 0.0e0;
  r->d3fdxs2ts[1] = 0.0e0;
  r->d3fdxs2ts[2] = 0.0e0;
  r->d3fdxs2ts[3] = 0.0e0;
  r->d3fdxs2ts[4] = 0.0e0;
  r->d3fdxs2ts[5] = 0.0e0;
  r->d3fdxs2us[0] = 0.0e0;
  r->d3fdxs2us[1] = 0.0e0;
  r->d3fdxs2us[2] = 0.0e0;
  r->d3fdxs2us[3] = 0.0e0;
  r->d3fdxs2us[4] = 0.0e0;
  r->d3fdxs2us[5] = 0.0e0;
  r->d3fdxsts2[0] = 0.0e0;
  r->d3fdxsts2[1] = 0.0e0;
  r->d3fdxsts2[2] = 0.0e0;
  r->d3fdxsts2[3] = 0.0e0;
  r->d3fdxsts2[4] = 0.0e0;
  r->d3fdxsts2[5] = 0.0e0;
  r->d3fdxstsus[0] = 0.0e0;
  r->d3fdxstsus[1] = 0.0e0;
  r->d3fdxstsus[2] = 0.0e0;
  r->d3fdxstsus[3] = 0.0e0;
  r->d3fdxstsus[4] = 0.0e0;
  r->d3fdxstsus[5] = 0.0e0;
  r->d3fdxstsus[6] = 0.0e0;
  r->d3fdxstsus[7] = 0.0e0;
  r->d3fdxsus2[0] = 0.0e0;
  r->d3fdxsus2[1] = 0.0e0;
  r->d3fdxsus2[2] = 0.0e0;
  r->d3fdxsus2[3] = 0.0e0;
  r->d3fdxsus2[4] = 0.0e0;
  r->d3fdxsus2[5] = 0.0e0;
  r->d3fdts3[0] = 0.0e0;
  r->d3fdts3[1] = 0.0e0;
  r->d3fdts3[2] = 0.0e0;
  r->d3fdts3[3] = 0.0e0;
  r->d3fdts2us[0] = 0.0e0;
  r->d3fdts2us[1] = 0.0e0;
  r->d3fdts2us[2] = 0.0e0;
  r->d3fdts2us[3] = 0.0e0;
  r->d3fdts2us[4] = 0.0e0;
  r->d3fdts2us[5] = 0.0e0;
  r->d3fdtsus2[0] = 0.0e0;
  r->d3fdtsus2[1] = 0.0e0;
  r->d3fdtsus2[2] = 0.0e0;
  r->d3fdtsus2[3] = 0.0e0;
  r->d3fdtsus2[4] = 0.0e0;
  r->d3fdtsus2[5] = 0.0e0;
  r->d3fdus3[0] = 0.0e0;
  r->d3fdus3[1] = 0.0e0;
  r->d3fdus3[2] = 0.0e0;
  r->d3fdus3[3] = 0.0e0;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_mgga_c_lp90_func
