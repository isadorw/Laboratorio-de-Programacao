#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int mdc (int a, int b) { // a = den, b = den
  if (a < 0)
		a = -a;
	if(b < 0)
		b = -b;
	if(a % b == 0)
		return b;
	else
		return mdc(b, a % b);
}

int main () {
	int n, i, n1, d1, n2, d2, num, den, d;
	char op;

	scanf("%d\n", &n); // nº de casos de teste
	

	for (i = 0; i < n; i++) {
		scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

		// operacções sem simplificações

		if (op == '+') {
			num = (n1 * d2) + (n2 * d1);
			den = d1 * d2;
		} else if (op == '-') {
			num = (n1 * d2) - (n2 * d1);
			den = d1 * d2;
		} else if (op == '*') {
			num = (n1 * n2);
			den = d1 * d2;
		} else if (op == '/') {
			num = n1 * d2;
			den = n2 * d1;
		}
		
		d = mdc(num, den);

		printf("%d/%d = %d/%d\n", num, den, num/d, den/d);
	}

	return 0;
}