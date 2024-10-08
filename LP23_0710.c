#include <stdio.h> 
#include <math.h> 
int main(){
 float peso, altura, imc;
 printf("Qual é o seu peso?");
 scanf("%f", &peso);
 printf("Qual é a sua altura?");
 scanf("%f", &altura);
 imc = peso / (altura * altura);
 printf("imc : %f", imc);
}