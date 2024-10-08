#include <stdio.h> 
int main(){ 
 float nota1, nota2, nota3, nota4, media;
 printf("Qual a nota1? ");
 scanf("%f", &nota1);
 printf("Qual a nota2? ");
 scanf("%f", &nota2);
 printf("Qual a nota3? ");
 scanf("%f", &nota3);
 printf("Qual a nota4? ");
 scanf("%f", &nota4);
 media = (nota1+nota2+nota3+nota4)/4;
  printf("A media e : %f", media);
    if(media > 7){
      printf(" O aluno esta aprovado"); 
 }
    if(media > 4 && media < 7){
      printf(" O aluno esta de exame final"); 
 }
    if(media < 4){
      printf(" O aluno esta reprovado");
 }
}