#include <stdio.h>
main() {
	int naturalna, liczba=0, wynik[]={0};
	printf("Podaj liczbę naturalną: ");
	scanf("%i", &naturalna);
	printf("Liczba ta w postaci osemkowej to : ");
	while(naturalna > 0) {
		wynik[liczba] = naturalna%16;
		liczba++;
		//printf("%X", naturalna%16); 
		naturalna /= 16; 
	}
	//printf("\n");

	for (liczba=0;liczba!=5;liczba++) {
		  printf ("wynik[%d]=%X\n", liczba, wynik[liczba]);
	}
	printf("\n");
}
