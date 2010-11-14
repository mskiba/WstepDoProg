#include <stdio.h>
main () {
	int ileliczb, i;
	printf("Ile znaków będzie miała każda tablica? ");
	scanf("%i", &ileliczb);

	float pierwsza[ileliczb];
	float druga[ileliczb];
	float wynik=0;

	for (i=0; i<ileliczb; i++) {
		printf("Podaj %i liczbę dla pierwszej tablicy: ", i+1);
		scanf("%f", &pierwsza[i]);
	}

	for (i=0; i<ileliczb; i++) {
		printf("Podaj %i liczbę dla drugiej tablicy: ", i+1);
		scanf("%f", &druga[i]);
	}

	for (i=0; i<ileliczb; i++) {
		wynik += pierwsza[i]*druga[i];
	}

	printf("Iloczyn skalarny: %.2f\n", wynik);
}
