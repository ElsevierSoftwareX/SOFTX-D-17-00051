(* type: work_gga_x *)

a1 :=   0.041106:
a2 :=   2.626712:
a3 :=   0.092070:
a4 :=   0.657946:

f0 := s-> a1 * s^a2/(1 + a3 * s^a2)^a4:
f  := x-> f0(X2S*x):
