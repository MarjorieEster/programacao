#include <stdio.h>
int main(){
    char civil;
    printf("Qual e o seu estado civil?");
    scanf("%c", &civil);

    if (civil == 's'){
    printf("O meu estado civil e solteiro");
    }
    if (civil == 'c'){
    printf("O seu estado civil e casado");
    }
    if (civil == 'd'){
    printf("O seu estado civil e divorciado");
    }
    if (civil == 'v'){
    printf("O seu estado civil e viuvo");
    }
}