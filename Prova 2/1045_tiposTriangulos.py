# lendo a, b e c em uma linha usando split()

a, b, c = input().split()

#convertendo para float

a = float(a)
b = float(b)
c = float(c)


if ((a >= b) and  (a >= c)):
	maior = a;
	meio = b;
	menor = c;

if ((b >= a) and (b >= c)):
	maior = b
	meio = a
	menor = c
else:
	maior = c
	meio = a
	menor = b

	
if (maior >= meio + menor):
	print("NAO FORMA TRIANGULO")
elif (maior * maior == meio * meio + menor * menor):
	print("TRIANGULO RETANGULO")
elif (maior * maior > meio * meio + menor * menor):
	print("TRIANGULO OBTUSANGULO")
elif (maior * maior < meio * meio + menor * menor):
	print("TRIANGULO ACUTANGULO")
		
if (maior == menor and maior == meio and meio == maior and meio == menor and menor == maior and menor == meio):
	print("TRIANGULO EQUILATERO")
elif (maior == menor or maior == meio or meio == maior or meio == menor or menor == maior or menor == meio):
	print("TRIANGULO ISOSCELES")
