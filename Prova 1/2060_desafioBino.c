#include <stdio.h>

int main()
{
    int n, x, i;
    int count2 = 0, count3 = 0, count4 = 0, count5 = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);

        if (x % 2 == 0)
            count2++;
        if (x % 3 == 0)
            count3++;
        if (x % 4 == 0)
            count4++;
        if (x % 5 == 0)
            count5++;
    }
    
    printf("%d Multiplo(s) de 2\n", count2);
    printf("%d Multiplo(s) de 3\n", count3);
    printf("%d Multiplo(s) de 4\n", count4);
    printf("%d Multiplo(s) de 5", count5);

    return 0;
}