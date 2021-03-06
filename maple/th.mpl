(* type: work_gga_c *)

XX := (z, xs) -> xs*((1 + z)/2)^(4/3):
YY := (z, xt, xs0, xs1) -> 2*(XX(z, xs0)^2 + XX(-z, xs1)^2) - xt^2:

f_th := (rs, z, xt, xs0, xs1) -> add(params_a_omega[i]
  * (n_spin(rs, z)^params_a_a[i] + n_spin(rs, -z)^params_a_a[i])
  * z^(2*params_a_b[i])
  * 1/2*(XX(z, xs0)^params_a_c[i] + XX(-z, xs1)^params_a_c[i])
  * YY(z, xt, xs0, xs1)^params_a_d[i], i=1..params_a_n)/n_total(rs):