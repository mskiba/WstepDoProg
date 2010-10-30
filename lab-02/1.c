#include<stdio.h>
main() {
	int naturalna, wynik=0;
	printf("Podaj jakąś liczbę naturalną: ");
	scanf("%i", &naturalna);
	
	while (naturalna > 0) {
		wynik += naturalna*naturalna; 
		naturalna -= 1;
	}
	
	printf("Suma kwadratów: %i\n", wynik);
}
