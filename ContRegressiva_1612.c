#include<stdio.h>
void contRegressiva(int n) {
int i;
for(i=n; i>=0; i--)
printf("%d\n", i);
}
int main() {
int n;
printf("Qual e o numero? ");
scanf("%d",&n);
contRegressiva(n);
}