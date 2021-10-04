# double slash // é para a divisão inteira

n= int(input())
print(n)

troco = n # troco recebe n

    # R$ 100,00 
cem = troco // 100
troco = troco - cem * 100

    # R$ 50,00 
cinq = troco // 50
troco = troco - cinq * 50

    # R$ 20,00 
vinte = troco // 20
troco = troco - vinte * 20

    # R$ 10,00 
dez = troco // 10
troco = troco - dez * 10

    # R$ 5,00 
cinco = troco // 5
troco = troco - cinco* 5

    # R$ 2,00 
dois = troco // 2
troco = troco - dois * 2

    # R$ 1,00 
um = troco

print("%d nota(s) de R$ 100,00" % cem)
print("%d nota(s) de R$ 50,00" % cinq)
print("%d nota(s) de R$ 20,00" % vinte)
print("%d nota(s) de R$ 10,00" % dez)
print("%d nota(s) de R$ 5,00" % cinco)
print("%d nota(s) de R$ 2,00" % dois)
print("%d nota(s) de R$ 1,00" % um)