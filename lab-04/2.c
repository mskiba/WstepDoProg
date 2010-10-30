#include <stdio.h>
main() {
	int naturalna, wynik[20], i;
	printf("Podaj liczbę naturalną: ");
	scanf("%i", &naturalna);

	for(i=0;naturalna > 0;i++) {
		wynik[i] = naturalna%8;
		naturalna /= 8;
	}

	printf("Liczba ta w postaci osemkowej to: ");

	while(i--) {
		printf("%d", wynik[i]);
	}
	printf("\n");
}
