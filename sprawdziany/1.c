 #include<stdio.h>
 main () {
    int x, y;
    printf("\n");
    for (x=0; x<30; x=x+1) {
     for (y=0; y<30; y=y+1)
      if (x*x + y*y > 900)  printf("*");
      else  printf(" ");
     printf("\n");
	}	
	printf("\n");
}
