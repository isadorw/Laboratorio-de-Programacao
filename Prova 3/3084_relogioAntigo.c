#include <stdio.h>
#include<math.h>

int main () {
	int ah, am, hh = 0, mm = 0;

	while (scanf("%d %d", &ah, &am) != EOF) {
		hh = ah / 30;
		mm = am / 6;
		printf("%02d:%02d\n", hh, mm);
	}
	return 0;
}