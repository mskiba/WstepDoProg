#include <stdio.h>

main() {
	int naturalna, suma=0, i, i_do_i_tej,j;
	printf("Podaj liczbę naturalną: ");
	scanf("%i", &naturalna);
	for(i=0; i<=naturalna; i++) {
		//policzyc potege 1^1
		i_do_i_tej=1;
		for(j=0; j<i; j++) { 
			i_do_i_tej *= i;
		}
		suma += i_do_i_tej;
	}
	printf("Wynik to: %i\n", suma-1);
}
