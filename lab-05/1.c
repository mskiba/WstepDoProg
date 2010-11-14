#include <stdio.h>

main () {
	int dodatnie=0, ujemne=0, zerowych=0, ileliczb, i;

	printf("Ile podasz liczb rzeczywistych?: ");
	scanf("%i", &ileliczb);

	float liczba[ileliczb];

	for(i=0;i<ileliczb;i++) {
		printf("Podaj %i liczbę rzeczywistą: ", i+1);
		scanf("%f", &liczba[i]);
	}
	
	printf("Trwa liczenie");
		
	for (i=0;i<ileliczb;i++) {
		printf(".");
		if(liczba[i] == 0) zerowych++;
		else if(liczba[i] > 0) dodatnie++;
		else ujemne++;

	}

	printf("\nLiczb dodatnich: %i, ujemnych: %i, zerowych: %i.\n", dodatnie, ujemne, zerowych);
}
