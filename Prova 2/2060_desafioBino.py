n = int(input())
x = input() # le n numeros com 1 espaco
x = x.split(' ') 

count2 = 0
count3 = 0
count4 = 0
count5 = 0

for i in range(n): 
    if int(x[i]) % 2 == 0:
        count2 += 1
    if int(x[i]) % 3 == 0:
        count3 += 1
    if int(x[i]) % 4 == 0:
        count4 += 1
    if int(x[i]) % 5 == 0:
        count5 += 1

print("%d Multiplo(s) de 2" % count2)
print("%d Multiplo(s) de 3" % count3)
print("%d Multiplo(s) de 4" % count4)
print("%d Multiplo(s) de 5" % count5)