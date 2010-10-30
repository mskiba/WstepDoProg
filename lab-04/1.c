#include<stdio.h>
int main() {
	int liczba[1000];
	int i=-1;

	printf("Wprowadź liczby:\n");

	do {
		i += 1;
		scanf("%d", &liczba[i]);  
	} while(liczba[i] != -1);

	printf("\nWynik: ");

	for (i-=1;i>=0;i--) {
		printf("%d ", liczba[i]);
	}
	
	printf("\n");
}
