#include <stdio.h>

main(){
	int kolumna, wiersz, iloczyn, liczba, kreski;
    printf("Jak dużą tabelkę chcesz narysować? (Podaj liczbę): ");
	scanf("%i", &liczba); 
	printf("\n\n");
	printf("==========");
	for(kolumna=0;kolumna<=liczba;kolumna++) printf("======");
	printf("\n");
	printf("||     ||");
	for(kolumna=0;kolumna<=liczba;kolumna++) printf(" %3i |", kolumna);
	printf("|\n||=====+");
	for(kolumna=0;kolumna<=liczba;kolumna++) printf("+=====");
	printf("||\n");
	for(kolumna=0;kolumna<=liczba;kolumna++) {
		printf("|| %3i ||", kolumna);
		iloczyn=0;
		for(wiersz=0;wiersz<=liczba;wiersz++) {
			printf(" %3i |", iloczyn);
			iloczyn += kolumna;
		}
		printf("|\n");
		if(kolumna<liczba) {
			printf("||-----+");
			for(kreski=0;kreski<=liczba;kreski++) printf("+-----");
			printf("||\n");
		}
	}
	printf("==========");
	for(kolumna=0;kolumna<=liczba;kolumna++) printf("======");
	printf("\n\n");
}
