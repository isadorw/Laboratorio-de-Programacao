#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
	int  n, n_lunos, i = 0, j = 0, a, cont;
	int nota1[1000], nota2[1000];
	char troca;
  int temp;

	scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
		cont = 0;
		scanf("%d", &n_lunos);

		for(j=0; j < n_lunos; j++)
		{
			scanf("%d", &nota1[j]);
			nota2[j] = nota1[j];
		}
		do
		{
			troca = 0;
			a = 0;
			while (a < n_lunos - 1)
			{	if (nota2[a] < nota2[a + 1])
				{	temp = nota2[a];
					nota2[a] = nota2[a + 1];
					nota2[a + 1] = temp;

					troca = 1;
				}
				a++;
			}
		} while (troca == 1);

		for(j = 0; j < n_lunos; j++)
			if (nota1[j] == nota2[j])
				cont++;
		printf("%d\n", cont);
	}
	return 0;
}