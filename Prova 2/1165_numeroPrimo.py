n = int(input())

for i in range (1, n + 1):
  x = int(input())
  c = 0
  for j in range (1, x + 1):
    if (x % j == 0):
      c = c + 1
  if (c == 2):
    print("%d eh primo" %x)
  else:
    print("%d nao eh primo" %x)