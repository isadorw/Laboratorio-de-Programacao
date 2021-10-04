#include <stdio.h>

int main () {
	int n, i, j, m, xj, dj, xm, dm;
	int soma_xj = 0, soma_dj = 0, soma_xm = 0, soma_dm = 0, r_j = 0, r_m = 0;
	
	// lendo n º de caso de testes
	scanf("%d\n", &n);

	for (i = 0; i < n; i++) { // repete ate ser menor do que 2
		for (j = 0; j < 3; j++) {
			scanf("%d %d\n", &xj, &dj);
			soma_xj += xj; // soma pontuação
			soma_dj += dj; // soma distancia
		}
		for (m = 0; m < 3; m++) {
			scanf("%d %d\n", &xm, &dm);
			soma_xm += xm; // soma pontuação
			soma_dm += dm; // soma distancia
		}

		r_j = soma_xj * soma_dj;
		r_m = soma_xm * soma_dm;

		if (r_j > r_m)
			printf("JOAO\n");
		else
			printf("MARIA\n");

		soma_xj = 0; soma_dj = 0;
		soma_xm = 0; soma_dm = 0;
    r_j = 0; r_m = 0;
	}

	return 0;
}