#include<stdio.h>
int main (){
    int i, idade, paciente, velho = 0;

printf("Qual e o numero de paciente?");
scanf("%d", &paciente);

  for(i=1; i<=paciente; i++)
  {
    printf("informe a idade dos pacientes %d:", i);
    scanf("%d", &idade);
  }
 if(velho<idade)
    velho = idade;
  printf("informe a idade do paciente mais velho: %d", velho);
 
}