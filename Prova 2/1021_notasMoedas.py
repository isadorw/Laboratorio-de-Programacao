n = float(input())

troco = int(n) #conversao de float para inteiro
n = n - troco # 576.73 - 576 = 0.73 pega so as moedas
moedas = (n *100) # 0.73 * 100 

	#NOTAS 

	# R$ 100.00
cem = troco / 100
t1 = troco % 100

	# R$ 50.00
cinq = t1 / 50
t2 = t1 % 50

	# R$ 20.00
vint = t2 / 20
t3 = t2 % 20

	# R$ 10.00
dez = t3 / 10
t4 = t3 % 10

	# R$ 5.00
cinco = t4 / 5
t5 = t4 % 5

	# R$ 2.00
dois = t5 / 2
t6 = t5 % 2

	# MOEDAS

	# R$ 1.00
um = t6 / 1
r1 = t6 % 1

	# restante das moedas
cinq2 = moedas / 50
vintc = (moedas % 50) / 25
dezc = ((moedas % 50) % 25) / 10
cincoc = (((moedas % 50) % 25) % 10) / 5
umc = ((((moedas % 50) % 25) % 10) % 5) / 1

print("NOTAS:")
print("%d nota(s) de R$ 100.00" % cem)
print("%d nota(s) de R$ 50.00" % cinq)
print("%d nota(s) de R$ 20.00" % vint)
print("%d nota(s) de R$ 10.00" % dez)
print("%d nota(s) de R$ 5.00" % cinco)
print("%d nota(s) de R$ 2.00" % dois)

print("MOEDAS:")
print("%d moeda(s) de R$ 1.00" % um)
print("%d moeda(s) de R$ 0.50" % cinq2)
print("%d moeda(s) de R$ 0.25" % vintc)
print("%d moeda(s) de R$ 0.10" % dezc)
print("%d moeda(s) de R$ 0.05" % cincoc)
print("%d moeda(s) de R$ 0.01" % umc)