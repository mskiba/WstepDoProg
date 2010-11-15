#include <stdio.h>
main() {
	int n, i, wynik;
	printf("Podaj liczbę naturalną n: ");
	scanf("%i", &n);

	int a[n], b[n];

	for (i=0; i<n; i++) {
		printf("Podaj %i liczbę dla pierwszej tablicy: ", i+1);
		scanf("%i", &a[i]);
	}

	for (i=0; i<n; i++) {
		printf("Podaj %i liczbę dla drugiej tablicy: ", i+1);
		scanf("%i", &b[i]);
	}

	printf("Wynik: ");

	for (i=0; i<n; i++) {
		wynik = a[i] + b[i];
		printf("%i ", wynik);
	}

	printf("\n");
}
