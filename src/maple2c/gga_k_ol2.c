/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_k_ol2.mpl
  Type of functional: work_gga_x
*/

void xc_gga_k_ol2_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
{
  double t1, t4, t5, t7, t8, t13, t14, t21;
  double t26;

  gga_k_ol2_params *params;
 
  assert(p->params != NULL);
  params = (gga_k_ol2_params * )(p->params);

  t1 = r->x * r->x;
  t4 = params->cc * r->x;
  t5 = M_CBRT2;
  t7 = t5 + 0.4e1 * r->x;
  t8 = 0.1e1 / t7;
  r->f = params->aa + 0.13888888888888888889e-1 * params->bb * t1 + t4 * t8;

  if(r->order < 1) return;

  t13 = t7 * t7;
  t14 = 0.1e1 / t13;
  r->dfdx = 0.27777777777777777778e-1 * params->bb * r->x + params->cc * t8 - 0.4e1 * t4 * t14;

  if(r->order < 2) return;

  t21 = 0.1e1 / t13 / t7;
  r->d2fdx2 = 0.27777777777777777778e-1 * params->bb - 0.8e1 * params->cc * t14 + 0.32e2 * t4 * t21;

  if(r->order < 3) return;

  t26 = t13 * t13;
  r->d3fdx3 = 0.96e2 * params->cc * t21 - 0.384e3 * t4 / t26;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_gga_k_ol2_enhance
