/* 
  This file was generated automatically with /nfs/data-012/marques/software/source/libxc/svn/scripts/maple2c.pl.
  Do not edit this file directly as it can be overwritten!!

  Maple version     : Maple 2016 (X86 64 LINUX)
  Maple source      : ../maple/gga_x_am05.mpl
  Type of functional: work_gga_x
*/

void xc_gga_x_am05_enhance
  (const xc_func_type *p,  xc_gga_work_x_t *r)
{
  double t1, t2, t3, t4, t6, t7, t8, t10;
  double t11, t12, t13, t16, t17, t18, t20, t21;
  double t22, t23, t24, t25, t26, t27, t30, t33;
  double t34, t35, t36, t37, t41, t42, t43, t47;
  double t48, t49, t52, t57, t58, t59, t60, t61;
  double t64, t67, t68, t69, t76, t77, t78, t79;
  double t83, t84, t89, t90, t91, t92, t97, t98;
  double t99, t102, t107, t109, t110, t114, t122, t125;
  double t128, t131, t132, t136, t137, t138, t139, t142;
  double t143, t148, t153, t154, t164, t166, t171, t174;
  double t176, t182, t183, t187, t188, t189, t192, t203;
  double t206, t208, t214, t216, t225, t237, t245, t246;
  double t251, t254, t263, t281, t299, t318, t330;


  t1 = POW_1_3(0.6e1);
  t2 = 0.31415926535897932385e1 * 0.31415926535897932385e1;
  t3 = POW_1_3(t2);
  t4 = t3 * t3;
  t6 = t1 / t4;
  t7 = r->x * r->x;
  t8 = t6 * t7;
  t10 = 0.1e1 + 0.11683333333333333333e0 * t8;
  t11 = 0.1e1 / t10;
  t12 = t7 * t11;
  t13 = t6 * t12;
  t16 = 0.1e1 + 0.29866666666666666667e-1 * t8;
  t17 = t11 * t16;
  t18 = t1 * t1;
  t20 = t18 / t3;
  t21 = t20 * r->x;
  t22 = POW_1_3(0.3e1);
  t23 = t22 * t22;
  t24 = POW_1_3(0.2e1);
  t25 = t23 * t24;
  t26 = sqrt(0.12e2);
  t27 = sqrt(t21);
  t30 = sqrt(0.6e1);
  t33 = LambertW(t26 * t27 * t21 * t30 / 0.1728e4);
  t34 = POW_1_3(t33);
  t35 = t34 * t34;
  t36 = t24 * t24;
  t37 = t22 * t36;
  t41 = 0.2823705740248932030511071641312341561894e2 + 0.3e1 / 0.4e1 * t37 * t34 * t33;
  t42 = POW_1_4(t41);
  t43 = t35 * t42;
  t47 = 0.1e1 + 0.28520565802067644170e-1 * t21 * t25 * t43;
  t48 = 0.1e1 / t47;
  t49 = t17 * t48;
  r->f = 0.1e1 - 0.11683333333333333333e0 * t13 + 0.11683333333333333333e0 * t8 * t49;

  if(r->order < 1) return;

  t52 = r->x * t11;
  t57 = t18 / t3 / t2;
  t58 = t7 * r->x;
  t59 = t10 * t10;
  t60 = 0.1e1 / t59;
  t61 = t58 * t60;
  t64 = t6 * r->x;
  t67 = t57 * t58;
  t68 = t60 * t16;
  t69 = t68 * t48;
  t76 = t47 * t47;
  t77 = 0.1e1 / t76;
  t78 = t20 * t23;
  t79 = t24 * t35;
  t83 = 0.1e1 + t33;
  t84 = 0.1e1 / t83;
  t89 = t33 * t33;
  t90 = t42 * t42;
  t91 = t90 * t42;
  t92 = 0.1e1 / t91;
  t97 = 0.28520565802067644170e-1 * t78 * t79 * t42 + 0.28520565802067644170e-1 * t78 * t79 * t42 * t84 + 0.64171273054652199382e-1 * t20 * t89 * t92 * t84;
  t98 = t77 * t97;
  t99 = t17 * t98;
  r->dfdx = -0.23366666666666666666e0 * t6 * t52 + 0.27300055555555555554e-1 * t57 * t61 + 0.23366666666666666666e0 * t64 * t49 - 0.27300055555555555554e-1 * t67 * t69 + 0.69788444444444444443e-2 * t57 * t58 * t11 * t48 - 0.11683333333333333333e0 * t8 * t99;

  if(r->order < 2) return;

  t102 = t6 * t11;
  t107 = t7 * t7;
  t109 = 0.1e1 / t59 / t10;
  t110 = t107 * t109;
  t114 = t57 * t7;
  t122 = t16 * t48;
  t125 = t107 * t60;
  t128 = t68 * t98;
  t131 = t11 * t77;
  t132 = t131 * t97;
  t136 = 0.1e1 / t76 / t47;
  t137 = t97 * t97;
  t138 = t136 * t137;
  t139 = t17 * t138;
  t142 = t20 * t25;
  t143 = 0.1e1 / r->x;
  t148 = t20 * t89;
  t153 = t83 * t83;
  t154 = 0.1e1 / t153;
  t164 = t35 * t33 * t42;
  t166 = 0.1e1 / t153 / t83;
  t171 = t89 * t33;
  t174 = 0.1e1 / t91 / t41;
  t176 = t20 * t34 * t171 * t174;
  t182 = t20 * t171;
  t183 = t92 * t166;
  t187 = 0.28520565802067644170e-1 * t142 * t43 * t143 * t84 + 0.64171273054652199382e-1 * t148 * t92 * t143 * t84 + 0.28520565802067644170e-1 * t142 * t43 * t154 * t143 + 0.25668509221860879753e0 * t148 * t92 * t154 * t143 - 0.42780848703101466255e-1 * t142 * t164 * t166 * t143 - 0.72192682186483724305e-1 * t176 * t154 * t22 * t36 * t143 - 0.96256909581978299073e-1 * t182 * t183 * t143;
  t188 = t77 * t187;
  t189 = t17 * t188;
  r->d2fdx2 = -0.23366666666666666666e0 * t102 + 0.13650027777777777777e0 * t57 * t7 * t60 - 0.78585432802218445203e-3 * t110 + 0.23366666666666666666e0 * t6 * t49 - 0.13650027777777777777e0 * t114 * t69 + 0.34894222222222222222e-1 * t57 * t12 * t48 - 0.46733333333333333332e0 * t64 * t99 + 0.78585432802218445203e-3 * t110 * t122 - 0.20089171980253274437e-3 * t125 * t48 + 0.54600111111111111108e-1 * t67 * t128 - 0.13957688888888888889e-1 * t67 * t132 + 0.23366666666666666666e0 * t8 * t139 - 0.11683333333333333333e0 * t8 * t189;

  if(r->order < 3) return;

  t192 = t58 * t109;
  t203 = t16 * t77 * t97;
  t206 = t107 * r->x;
  t208 = t6 * t48;
  t214 = t59 * t59;
  t216 = t206 / t214;
  t225 = -0.70726889521996600683e-2 * t192 + 0.14020000000000000000e1 * t64 * t139 - 0.16380033333333333333e0 * t67 * t68 * t138 + 0.83746133333333333333e-1 * t57 * t52 * t48 - 0.23575629840665533561e-2 * t110 * t203 + 0.14082509558157545380e-3 * t206 * t109 * t208 + 0.32760066666666666665e0 * t57 * t60 * r->x + 0.55088388394355130086e-3 * t216 * t6 + 0.70726889521996600683e-2 * t192 * t122 + 0.60267515940759823311e-3 * t125 * t98 - 0.18080254782227946994e-2 * t61 * t48;
  t237 = 0.1e1 / t7;
  t245 = t153 * t153;
  t246 = 0.1e1 / t245;
  t251 = t89 * t89;
  t254 = 0.1e1 / t245 / t83;
  t263 = t166 * t237;
  t281 = t41 * t41;
  t299 = -0.64171273054652199382e-1 * t148 * t92 * t237 * t84 + 0.83422654971047859197e0 * t148 * t183 * t237 - 0.12994682793567070375e1 * t182 * t92 * t246 * t237 + 0.43315609311890234583e0 * t20 * t251 * t92 * t254 * t237 - 0.28520565802067644170e-1 * t142 * t43 * t237 * t84 + 0.28520565802067644170e-1 * t142 * t43 * t263 - 0.19251381916395659815e0 * t142 * t164 * t246 * t237 - 0.64973413967835351874e0 * t176 * t263 * t37 + 0.19251381916395659815e0 * t142 * t35 * t89 * t42 * t254 * t237 + 0.37901158147903955260e0 * t20 * t35 * t251 / t91 / t281 * t166 * t23 * t24 * t237 + 0.32486706983917675938e0 * t20 * t34 * t251 * t174 * t246 * t22 * t36 * t237;
  t318 = t76 * t76;
  t330 = 0.40950083333333333331e0 * t114 * t128 - 0.70099999999999999998e0 * t64 * t189 + 0.81900166666666666662e-1 * t67 * t68 * t188 + 0.41873066666666666667e-1 * t67 * t11 * t136 * t137 - 0.11683333333333333333e0 * t8 * t17 * t77 * t299 - 0.70099999999999999998e0 * t102 * t203 - 0.32760066666666666665e0 * t57 * t60 * t122 * r->x - 0.10468266666666666667e0 * t114 * t132 - 0.55088388394355130086e-3 * t216 * t16 * t208 - 0.20936533333333333333e-1 * t67 * t131 * t187 - 0.70099999999999999998e0 * t8 * t17 / t318 * t137 * t97 + 0.70099999999999999998e0 * t13 * t16 * t136 * t97 * t187;
  r->d3fdx3 = t225 + t330;

  if(r->order < 4) return;


}

#define maple2c_order 3
#define maple2c_func  xc_gga_x_am05_enhance
