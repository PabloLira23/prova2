#include <stdio.h>

int main () {
    int i, pessoas, idade;
    pessoas = 0;
    for (i = 1; i <= 10; i++) {
        printf ("Escreva uma idade: ");
        scanf ("%d", &idade);
        while(idade < 0 || idade > 180){
            printf("Digite uma idade v�lida: ");
            scanf("%d", &idade);
        }
        pessoas = pessoas + 1;

        if(idade >= 0  && idade <= 12) {
            printf("Classifica��o de crian�as\n\n");
        }

        else if(idade >=13 && idade <=17){
            printf("Classifica��o de Adolescente\n\n");
        }

        else if(idade >=18 && idade <=64){
            printf("Classifica��o de Adulto\n\n");
        }

        else if(idade >=65){
            printf("Classifica��o de Idoso\n\n");
        }
    }





    return 0;
}
