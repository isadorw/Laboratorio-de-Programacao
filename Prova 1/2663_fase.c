#include <stdio.h>

void ordena(int*, int);

int main() {
    int numComp, qtdclassificados, i, j, cont = 0;

    scanf("%d", &numComp); // total competidores
    scanf("%d", &qtdclassificados); // total de classificados

    int notas[numComp];

    for (i = 0; i < numComp; i++) {
        scanf("%d", &notas[i]); // lendo classificado dos competidores
    }

    ordena(notas, numComp);

    j = qtdclassificados;
    i = qtdclassificados - 1;
    cont = qtdclassificados;

    while (notas[j++] == notas[i])
		  cont++;

    printf("%d\n", cont);

    return 0;
}

void ordena(int *vet, int size) { // method insertion
    int x, y, value;

    // percorrer o vetor a partir da segunda posicao
    for (x = 1; x < size; x++) { // x = 1 segundo valor do vetor
       // guardar em uma var temporaria
       value = vet[x];

       // mover para a direita para liberar o valor de value
       for (y = x - 1; y >= 0 && vet[y] < value; y--) {
           vet[y+1] = vet[y];
       }
       vet[y+1] = value;
    }
}