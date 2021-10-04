# lendo a, b e c em uma linha usando split()

a, b, c = input().split()


#convertendo para float

a = float(a)
b = float(b)
c = float(c)


#calculando form de bhaskara


if ((b * b) - 4 * a * c) < 0 or a == 0.0:
	print("Impossivel calcular")
else:
  r1 = (-b + (b ** 2 - 4 * a * c) ** (1/2) ) / (2 * a)
  r2 = (-b - (b ** 2 - 4 * a * c) ** (1/2) ) / (2 * a)
  print("R1 = %.5lf" % r1)
  print("R2 = %.5lf" % r2)