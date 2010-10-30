#include<stdio.h>
int main()
{
   char klucz[] = {"sinhmtpalwyc bqxevkrjudgofz"};
   int x;
   do
   {
      scanf("%d", &x);
      if(x<27 && x>=0) printf("%c", klucz[x]);  
   }
   while(x != -1);
   return 0;
}
