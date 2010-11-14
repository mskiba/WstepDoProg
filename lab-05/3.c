#include <stdio.h>
main () {
	int ileliczb, i, wieksza=0;
	printf("Ile znaków będzie miała każda tablica? ");
	scanf("%i", &ileliczb);

	float pierwsza[ileliczb];
	float druga[ileliczb];

	for (i=0; i<ileliczb; i++) {
		printf("Podaj %i liczbę dla pierwszej tablicy: ", i+1);
		scanf("%f", &pierwsza[i]);
	}

	for (i=0; i<ileliczb; i++) {
		printf("Podaj %i liczbę dla drugiej tablicy: ", i+1);
		scanf("%f", &druga[i]);
	}

	i=0;
	while (wieksza == 0 && i < ileliczb) {
		if (pierwsza[i] == druga[i]) { 
			printf("%f == %f\n", pierwsza[i], druga[i]);
		}
		else if (pierwsza[i] > druga[i]) { 
			printf("%f > %f\n", pierwsza[i], druga[i]);
			wieksza++;
		}
		else {
			printf("%f < %f\n", pierwsza[i], druga[i]);
			wieksza--;
		}
		i++;
	}

	if(wieksza == 0) {
		printf("Tablice są równe.\n");
	}
	else if (wieksza == 1) {
		printf("Tablica pierwsza jest większa.\n");
	}
	else {
		printf("Tablica druga jest większa.\n");
	}

}
