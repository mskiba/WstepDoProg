#include <stdio.h>
main() {
	int naturalna, wynik=0, mnoznik=1;
	printf("Podaj liczbę naturalną: ");
	scanf("%i", &naturalna);

	while(naturalna >= 8) {
		wynik += (naturalna%8) * mnoznik;
		naturalna /= 8;
		mnoznik *= 10;
	}

	wynik += naturalna * mnoznik;

    printf( "Liczba ta w postaci osemkowej to : " );
	printf( "%i\n" , wynik );

}
