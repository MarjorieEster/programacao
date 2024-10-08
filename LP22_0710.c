#include <stdio.h> 
int main(){
 float medida, preco, custo;
 printf("Qual e a medida da sala?");
 scanf("%f", &medida);
 printf("Qual e o preco?");
 scanf("%f", &preco);
 custo = medida * preco;
 printf("O custo foi : %f", custo);
}