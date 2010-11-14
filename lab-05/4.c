#include <stdio.h>
main () {
	int iletablic, ileliczb, i, j, ktoratablica;
	printf("Ile tablic podasz? ");
	scanf("%i", &iletablic);

	printf("Ile znaków będzie miała każda z tablic? ");
	scanf("%i", &ileliczb);

	float najwieksza[ileliczb];
	float podawana[ileliczb];

	for (i=0; i<ileliczb; i++) {
		printf("Podaj %i liczbę dla 1 tablicy: ", i+1);
		scanf("%f", &najwieksza[i]);
	}

	for(ktoratablica=2; ktoratablica<=iletablic; ktoratablica++) {
    	for (i=0; i<ileliczb; i++) {
			printf("Podaj %i liczbę dla %i tablicy: ", i+1, ktoratablica);
			scanf("%f", &podawana[i]);
		}
		
		for (i=0; i<ileliczb; i++) {
			if(podawana[i] > najwieksza[i]) {
				for(j=0; j<ileliczb; j++) {
					najwieksza[j] = podawana[j];
				}
			}
		}
	}

	printf("Największa tablica to:\n");
	for (i=0; i<ileliczb; i++) {
		printf("najwieksza[%i] = %.2f\n", i, najwieksza[i]);
	}
}
