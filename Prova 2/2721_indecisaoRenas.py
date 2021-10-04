n = input().split(' ') 

i = 0
soma = 0

for x in n: # faça algo para x com base n
    soma += int(x)

if (soma % 9 == 0):
	print("Rudolph")
elif (soma % 9 == 8):
        print("Blitzen")
elif (soma % 9 == 7):
        print("Donner")
elif (soma % 9 == 6):
        print("Cupid")
elif (soma % 9 == 5):
        print("Comet")
elif (soma % 9 == 4):
        print("Vixen")
elif (soma % 9 == 3):
        print("Prancer")
elif (soma % 9 == 2):
        print("Dancer")
elif (soma % 9 == 1):
        print("Dasher")