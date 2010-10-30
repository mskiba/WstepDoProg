#include<stdio.h>

main() {
    char klucz[] = {"sinhmtpalwyc bqxevkrjudgofz"};
	int szyfr;

	do {
		scanf("%d", &szyfr);
		if(szyfr<27 && szyfr>=0) {
			printf("%c", klucz[szyfr]);
		}
	} while(szyfr != -1);
}
