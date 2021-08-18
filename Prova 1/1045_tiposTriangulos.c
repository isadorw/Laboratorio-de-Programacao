#include <stdio.h>
#include <math.h>

int main() {
	double a, b, c, maior, meio, menor;
	scanf("%lf %lf %lf", &a, &b, &c);
	
	if (a >= b && a >= c) {
		maior = a;
		meio =  b;
		menor = c;
	}
	
	if (b >= a && b >= c) {
		maior = b;
		meio = a;
		menor = c;
	} else {
		maior = c;
		meio = a;
		menor = b;
	}
	
	if (maior >= meio + menor)
		printf("NAO FORMA TRIANGULO\n");
	else if (maior * maior == meio * meio + menor * menor)
		printf("TRIANGULO RETANGULO\n");
	else if (maior * maior > meio * meio + menor * menor)
		printf("TRIANGULO OBTUSANGULO\n");
	else if (maior * maior < meio * meio + menor * menor)
		printf("TRIANGULO ACUTANGULO\n");
	
	if (maior == menor && maior == meio && meio == maior && meio == menor && menor == maior && menor == meio)
		printf("TRIANGULO EQUILATERO\n");
	else if (maior == menor|| maior == meio || meio == maior || meio == menor || menor == maior || menor == meio)
		printf("TRIANGULO ISOSCELES\n");
}