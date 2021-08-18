#include <stdio.h>

int main() {
    double A, B, media, p1, p2;
    scanf("%lf %lf", &A, &B);
    p1 = 3.5;
    p2 = 7.5;
    media = (A * p1 + B * p2) / 11;
    printf("MEDIA = %.5lf\n", media);
}