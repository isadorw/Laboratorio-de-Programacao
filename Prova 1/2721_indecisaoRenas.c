#include <stdio.h>

int main() {
    int i, x, soma = 0;

    for (i = 0; i < 9; i++) {
        scanf("%d", &x);
        soma += x;
    }

    if (soma % 9 == 0)
        printf("Rudolph\n");
    else if (soma % 9 == 8)
        printf("Blitzen\n");
    else if (soma % 9 == 7)
        printf("Donner\n");
    else if (soma % 9 == 6)
        printf("Cupid\n");
    else if (soma % 9 == 5)
        printf("Comet\n");
    else if (soma % 9 == 4)
        printf("Vixen\n");
    else if (soma % 9 == 3)
        printf("Prancer\n");
    else if (soma % 9 == 2)
        printf("Dancer\n");
    else if (soma % 9 == 1)
        printf("Dasher\n");
    
    return 0;
}