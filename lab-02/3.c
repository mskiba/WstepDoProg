#include <stdio.h>

main(){
printf("Podaj ile liczb podasz w systemie osemkowym\n");
int ileliczb;
scanf("%i",&ileliczb);
int i;
int liczba;
int wynik=0;
for(i=0;i<ileliczb;i++){
  scanf("Podaj liczbe");
  scanf("%i",&liczba);
  if(i==0)wynik = liczba*8;
  if(i==1)wynik = wynik + liczba;
  if(i>1) wynik = wynik * 8 + liczba;
}
printf("%d\n",wynik);
}
