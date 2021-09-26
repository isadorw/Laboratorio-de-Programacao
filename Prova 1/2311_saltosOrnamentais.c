#include <stdio.h>

int main() {
  int nj, i,j;
  char nome[100];
  double g, nota;

  scanf("%d", &nj);

  for(i = 1; i <= nj; i++) {
    double soma = 0, maior = -10.00, menor = 100.00; 
    scanf("%s", nome);
    scanf("%lf", &g);

    for (j = 1; j <= 7; j++) {
      scanf("%lf", &nota);
      if (nota > maior)
          maior = nota;
      if (nota < menor)
          menor = nota;
      soma += nota;
    }
      soma = soma - (maior + menor);
      soma *= g;
      printf("%s %.2lf\n", nome, soma);
  }

return 0;

}