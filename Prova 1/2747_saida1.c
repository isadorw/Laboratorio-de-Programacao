#include <stdio.h>

int main() {
    int i, j, z, n = 39;

    for (i = 0; i < n; i++) // primeira linha
        printf("-");
    for (j = 0; j < 5; j++) { 
    printf("\n|"); // barras lateriais esquerdas
    for (i = 0; i < n - 2; i++) { // espacos
        printf(" ");
    }
    printf("|"); // barras lateriais direitas
    }
    printf("\n");
    for (i = 0; i < n; i++)
        printf("-"); // ultima linha

    printf("\n");
      
    return 0;
}