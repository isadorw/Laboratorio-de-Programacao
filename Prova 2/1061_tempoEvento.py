#entrada
dinicio = input().split(" ")
hinicio = input().split(" ")
dfinal = input().split(" ")
hfinal = input().split(" ")


#convertendo variaveis para inteiro
di, df = int(dinicio[1]), int(dfinal[1])
hi, mi, si = int(hinicio[0]), int(hinicio[2]), int(hinicio[4])
hf, mf, sf = int(hfinal[0]), int(hfinal[2]), int(hfinal[4])

#processando
di = df - di
hi = hf - hi
mi = mf - mi
si = sf - si

if (si < 0):
	si += 60
	mi = mi - 1

if (mi < 0):
	mi += 60
	hi = hi - 1

if (hi < 0):
	hi += 24
	di = di - 1


#saida
print("%d dia(s)" %di)
print("%d hora(s)" %hi)
print("%d minuto(s)" %mi)
print("%d segundo(s)" %si)