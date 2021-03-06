(* type: work_lda *)

eta0 := -log(sqrt(2*Pi)) - 3/4:
eta1 := 0.359933:
eps0 := -Pi^2/360:
eps1 := 0.00714:

kappa := 0.3083:

c0 := kappa*eta0:
c1 := 4*kappa*eta0 + kappa*sqrt(kappa)*eta1:
c2 := 5*eps0 + eps1/kappa:
c3 := eps1:

t := rs -> (sqrt(1 + 4*kappa*rs) - 1)/(2*kappa*rs):

f := (rs, z) ->
  t(rs)^2*(c0*(1 - t(rs))^3 + c1*t(rs)*(1 - t(rs))^2 + c2*t(rs)^2*(1 - t(rs)) + c3*t(rs)^3):
