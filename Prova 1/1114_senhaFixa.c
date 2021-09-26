#include <stdio.h>

int main() {
	int senhaC = 2002, senhaU = 0;

	while (senhaC != senhaU) {
		scanf("%d", &senhaU);
		if (senhaC != senhaU) {
			printf("Senha Invalida\n");
		} else {
			printf("Acesso Permitido\n");
		}
}
	return 0;

}