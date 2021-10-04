n = input()
n = int(n)


for i in range (1, n + 1): #(i começa com 1, n + 1 pq o i para 1 a menos)
	if (i % 2 == 0):
		quad = i**2
		print("{}^2 = {}" .format(i, quad))