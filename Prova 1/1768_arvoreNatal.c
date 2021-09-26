#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, x;

    while (scanf("d", &n) != EOF)
    {
        // 1. topo da arv espacos e asteristico
        for (i = 0; i < n; i += 2) // i = 0, 2, 6, 8 break p 9
        {
            for (j = 0; j < (n - i) / 2; j++) // espacos antes do topo
                printf(" ");
            for (x = i; x >= 0; x--) // topo
                printf("*");

            printf("\n");
        }


        for (i = 0; i < n / 2; i++)
            printf(" ");

        printf("*\n");

        for (i = 1; i < n / 2; i++)
            printf(" ");

        printf("***\n\n"); 

        
    }
    

    return 0;
}
