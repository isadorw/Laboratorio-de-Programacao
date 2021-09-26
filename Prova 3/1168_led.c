// LEDS

/* 
1 -> 2
2 -> 5
3 -> 5
4 -> 4
5 -> 5
6 -> 6
7 -> 3
8 -> 7
9 -> 6
0 -> 6 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char x[1000];
	int n, i, j, leds = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%s", x);
    for (j = 0; j < strlen(x); j++) { // strlen: length of a given string

      if (x[j] == '1') {
        leds += 2;
      } else if (x[j] == '2') {
        leds += 5;
      } else if (x[j] == '3') {
        leds += 5;
      } else if (x[j] == '4') {
        leds += 4;
      } else if (x[j] == '5') {
        leds += 5;
      } else if (x[j] == '6') {
        leds += 6;
      } else if (x[j] == '7') {
        leds += 3;
      } else if (x[j] == '8') {
        leds += 7;
      } else if (x[j] == '9') {
        leds += 6;
      } else if (x[j] == '0') {
        leds += 6;
      }
  	}
      printf("%d leds\n", leds);
      leds = 0;
  }
  return 0;
}