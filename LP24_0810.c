#include <stdio.h> 
#include <math.h> 
int main(){
 float tamanho, velocidade, tempo;
 printf("Qual e o tamanho do arquivo?");
 scanf("%f", &tamanho);
 printf("Qual foi a velocidade da conexao?");
 scanf("%f", &velocidade);
 tempo = tamanho / velocidade;
 printf("Qual o tempo necessario para download : %f", tempo);
}