nj = int(input())

somaS = 0 #total de saques
somaB = 0 #total de bloqueios
somaA = 0 #total de ataques
somaS1 = 0 #total de saques acertos
somaB1 = 0 #total de bloqueios acertos
somaA1 = 0 #total de bloqueios acertos

for i in range (0, nj):
	nome = input()
	s, b, a = map(int, input().split()) 
	s1, b1, a1 = map(int, input().split())
	somaS += s
	somaB += b
	somaA += a
	somaS1 += s1
	somaB1 += b1
	somaA1 += a1


rS = (100 / somaS) * somaS1
rB = (100 / somaB) * somaB1
rA = (100 / somaA) * somaA1

print("Pontos de Saque: %.2f" % rS, "%.")
print("Pontos de Bloqueio: %.2f" % rB, "%.")
print("Pontos de Ataque: %.2f" % rA, "%.")