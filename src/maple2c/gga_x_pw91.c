/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_pw91.mpl
  Type of functional: work_gga_x
*/

void xc_gga_x_pw91_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
{
  double t1, t3, t4, t5, t6, t7, t8, t11;
  double t14, t17, t18, t19, t22, t23, t24, t30;
  double t34, t35, t38, t40, t41, t51, t52, t54;
  double t55, t56, t60, t63, t67, t68, t70, t73;
  double t79, t80, t81, t82, t83, t90, t91, t93;
  double t95, t96, t98, t102, t103, t104, t108, t110;
  double t113, t117, t123, t137, t139, t142, t145, t156;
  double t170, t173;

  gga_x_pw91_params *params;
 
  assert(p->params != NULL);
  params = (gga_x_pw91_params * )(p->params);

  t1 = M_CBRT6;
  t3 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t4 = cbrt(t3);
  t5 = t4 * t4;
  t6 = 0.1e1 / t5;
  t7 = r->x * r->x;
  t8 = t6 * t7;
  t11 = exp(-params->alpha * t1 * t8 / 0.24e2);
  t14 = (params->d * t11 + params->c) * t1;
  t17 = t1 * t1;
  t18 = 0.1e1 / t4;
  t19 = t17 * t18;
  t22 = pow(t19 * r->x / 0.12e2, params->expo);
  t23 = params->f * t22;
  t24 = t14 * t8 / 0.24e2 - t23;
  t30 = log(params->b * t17 * t18 * r->x / 0.12e2 + sqrt(pow(params->b * t17 * t18 * r->x / 0.12e2, 0.2e1) + 0.1e1));
  t34 = 0.1e1 + t19 * r->x * params->a * t30 / 0.12e2 + t23;
  t35 = 0.1e1 / t34;
  r->f = t24 * t35 + 0.1e1;

  if(r->order < 1) return;

  t38 = params->d * params->alpha * t17;
  t40 = 0.1e1 / t4 / t3;
  t41 = t7 * r->x;
  t51 = t23 * params->expo / r->x;
  t52 = -t38 * t40 * t41 * t11 / 0.288e3 + t14 * t6 * r->x / 0.12e2 - t51;
  t54 = t34 * t34;
  t55 = 0.1e1 / t54;
  t56 = t24 * t55;
  t60 = t1 * t6;
  t63 = params->b * params->b;
  t67 = 0.6e1 * t63 * t1 * t8 + 0.144e3;
  t68 = sqrt(t67);
  t70 = params->a * params->b / t68;
  t73 = t19 * params->a * t30 / 0.12e2 + t60 * r->x * t70 / 0.2e1 + t51;
  r->dfdx = t52 * t35 - t56 * t73;

  if(r->order < 2) return;

  t79 = params->alpha * params->alpha;
  t80 = params->d * t79;
  t81 = t3 * t3;
  t82 = 0.1e1 / t81;
  t83 = t7 * t7;
  t90 = params->expo * params->expo;
  t91 = 0.1e1 / t7;
  t93 = t23 * t90 * t91;
  t95 = t23 * params->expo * t91;
  t96 = -0.5e1 / 0.288e3 * t38 * t40 * t7 * t11 + t80 * t82 * t83 * t11 / 0.576e3 + t14 * t6 / 0.12e2 - t93 + t95;
  t98 = t52 * t55;
  t102 = 0.1e1 / t54 / t34;
  t103 = t24 * t102;
  t104 = t73 * t73;
  t108 = t17 * t40;
  t110 = t63 * params->b;
  t113 = 0.1e1 / t68 / t67;
  t117 = -0.3e1 * t108 * t7 * params->a * t110 * t113 + t60 * t70 + t93 - t95;
  r->d2fdx2 = 0.2e1 * t103 * t104 - t56 * t117 + t96 * t35 - 0.2e1 * t98 * t73;

  if(r->order < 3) return;

  t123 = t82 * t41;
  t137 = 0.1e1 / t41;
  t139 = t23 * t90 * params->expo * t137;
  t142 = 0.3e1 * t23 * t90 * t137;
  t145 = 0.2e1 * t23 * params->expo * t137;
  t156 = t54 * t54;
  t170 = t63 * t63;
  t173 = t67 * t67;
  r->d3fdx3 = (-t38 * t40 * r->x * t11 / 0.24e2 + t80 * t123 * t11 / 0.64e2 - params->d * t79 * params->alpha * t82 * t83 * r->x * t1 * t6 * t11 / 0.6912e4 - t139 + t142 - t145) * t35 - 0.3e1 * t96 * t55 * t73 + 0.6e1 * t52 * t102 * t104 - 0.3e1 * t98 * t117 - 0.6e1 * t24 / t156 * t104 * t73 + 0.6e1 * t103 * t73 * t117 - t56 * (-0.12e2 * t108 * params->a * t110 * t113 * r->x + 0.324e3 * t123 * params->a * t170 * params->b / t68 / t173 + t139 - t142 + t145);

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_gga_x_pw91_enhance
