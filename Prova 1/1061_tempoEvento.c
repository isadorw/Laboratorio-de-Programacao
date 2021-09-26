#include <stdio.h>

int main() {
	int dinicio, dfinal, hinicio, hfinal, minicio, mfinal, sinicio, sfinal;
	
	scanf("Dia %d\n", &dinicio);
	scanf("%d : %d : %d\n", &hinicio, &minicio, &sinicio);
	scanf("Dia %d\n", &dfinal);
	scanf("%d : %d : %d\n", &hfinal, &mfinal, &sfinal);

	dinicio = dfinal - dinicio;
	hinicio = hfinal - hinicio;
	minicio = mfinal - minicio;
	sinicio = sfinal - sinicio;

	if (sinicio < 0) {
		sinicio += 60;
		minicio--;
	}

	if (minicio < 0) {
		minicio += 60;
		hinicio--;
	}

	if (hinicio < 0) {
		hinicio += 24;
		dinicio--;
	}

	printf("%d dia(s)\n", dinicio); 	
	printf("%d hora(s)\n", hinicio); 	
	printf("%d minuto(s)\n", minicio); 	
	printf("%d segundo(s)\n", sinicio); 
	
	return 0;
}
