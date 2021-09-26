#include <stdio.h>

int main()
{
  int nj, i, s, b, a, s1, b1, a1;
  double somaS = 0, somaB = 0,somaA = 0, somaS1 = 0, somaB1 = 0, somaA1 = 0;
  double rS, rB, rA;
  char nome[100];

  scanf("%d", &nj);
  for(i = 1; i <= nj; i++) {
    scanf("%s", nome);
    scanf("%d %d %d", &s, &b, &a);
    scanf("%d %d %d", &s1, &b1, &a1);
    somaS += s;
    somaB += b;
    somaA += a;
    somaS1 += s1;
    somaB1 += b1;
    somaA1 += a1;
  }

  rS = (100 / somaS) * somaS1;
  rB = (100 / somaB) * somaB1;
  rA = (100 / somaA) * somaA1;

  printf("Pontos de Saque: %.2lf %%.\n", rS);
  printf("Pontos de Bloqueio: %.2lf %%.\n", rB);
  printf("Pontos de Ataque: %.2lf %%.\n", rA);

  return 0;
}