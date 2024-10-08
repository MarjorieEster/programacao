#include <stdio.h> 
int main(){
 float distancia, combustivel, consumo;
 printf("Qual foi a sua distancia?");
 scanf("%f", &distancia);
 printf("Quanto de combustivel voce gastou?");
 scanf("%f", &combustivel);
 consumo = distancia / combustivel;
 printf("consumo : %f", consumo);
}