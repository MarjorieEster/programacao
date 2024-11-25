#include<stdio.h>
int main (){
    int i;
    int a=0;
    int b=0;
    int c=0;
    char voto;
    int eleitores;

printf("Qual o total de eleitores?");
scanf("%d", &eleitores);

for(i=1; i<=eleitores; i++){

printf("informe o voto do eleitor %d:",i);
scanf("%c", &voto);
scanf("%c", &voto);

if(voto== 'a'){
   a++;
}
if(voto== 'b'){
   b++;
}
if(voto== 'c'){
   b++;
}
}
printf("o resultado da eleicao para a: %d\n",a);
printf("o resultado da eleicao para b: %d\n",b);
printf("o resultado da eleicao para c: %d\n",c);
}