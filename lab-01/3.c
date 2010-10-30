#include <stdio.h>
main () {
 	int wynik=1,wykladnik=10,podstawa=2;
	while (wykladnik > 0) {
		wynik = wynik*podstawa;
		wykladnik = wykladnik - 1;
	}
	printf("Wynik to: %i.\n",wynik);
}
