#include <stdio.h>
int main(void) {
 int n, c, r;
 printf("Qual o numero? "); 
 scanf("%d", &n); 
 printf("\nTabuada do %d\n\n", n); 
 for(c=10 ; c>=1 ; c--) { 
 r = n*c; 
 printf("%d x %2d = %3d\n", n, c, r); 
 } 
 return 0; 
}