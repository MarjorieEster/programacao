#include <stdio.h> 
#include <math.h> 
int main(){
 float capital, juros, meses, montante;
 printf("Qual foi o capital?");
 scanf("%f", &capital);
 printf("Qual e a taxa de juros mensal?");
 scanf("%f", &juros);
 printf("Qual foi a quantidade de meses?");
 scanf("%f", &meses);
 montante = capital*pow((1+juros/100),meses);
 printf("Qual foi o montante no final do periodo : %f", montante);
}