// URI 1021
#include <stdio.h>

int main() {
	double n;
	int troco, moedas;

	// notas e troco
	int cem, cinq, vint, dez, cinco, dois;
	int t1, t2, t3, t4, t5, t6;

	// moedas e resto
	int um, cinq2, vintc, dezc, cincoc, umc;
	int r1, r2, r3, r4, r5;

	scanf("%lf", &n); // 576.73

	troco = (int)n; // 576 pega so a parte inteira
	n = n - troco; // 576.73 - 576 pega so as moedas
	moedas = (n *100); // 0.73 * 100 

	// NOTAS 
	// R$ 100.00
	cem = troco / 100;
	t1 = troco % 100;

	// R$ 50.00
	cinq = t1 / 50;
	t2 = t1 % 50;

	// R$ 20.00
	vint = t2 / 20;
	t3 = t2 % 20;

	// R$ 10.00
	dez = t3 / 10;
	t4 = t3 % 10;

	// R$ 5.00
	cinco = t4 / 5;
	t5 = t4 % 5;

	// R$ 2.00
	dois = t5 / 2;
	t6 = t5 % 2;

	// MOEDAS

	// R$ 1.00
	um = t6 / 1;
	r1 = t6 % 1;

	// restante das moedas
	cinq2 = moedas / 50;
	vintc = (moedas % 50) / 25;
	dezc = ((moedas % 50) % 25) / 10;
	cincoc = (((moedas % 50) % 25) % 10) / 5;
	umc = ((((moedas % 50) % 25) % 10) % 5) / 1;
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", cem);
	printf("%d nota(s) de R$ 50.00\n", cinq);
	printf("%d nota(s) de R$ 20.00\n", vint);
	printf("%d nota(s) de R$ 10.00\n", dez);
	printf("%d nota(s) de R$ 5.00\n", cinco);
	printf("%d nota(s) de R$ 2.00\n", dois);

	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", um); 
	printf("%d moeda(s) de R$ 0.50\n", cinq2); 
	printf("%d moeda(s) de R$ 0.25\n", vintc); 
	printf("%d moeda(s) de R$ 0.10\n", dezc); 
	printf("%d moeda(s) de R$ 0.05\n", cincoc); 
	printf("%d moeda(s) de R$ 0.01\n", umc); 
	
	return 0;
}