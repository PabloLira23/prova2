#include <stdio.h>

int main(){
    //obs sobre este exerc�cio: em C, os �ndices dos arrays sempre come�am em 0, por isso o i = 0 nos FORs e o 1+ nos PRINTFs

    float notas[5]; //array(lista) que armazena as 5 notas
    int i;

    for(i = 0; i < 5; i++){
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    printf("\n");

    for(i = 0; i < 5; i++){
        if(notas[i] >= 7){
            printf("M�dia do aluno %d: %.2f - APROVADO!\n", i+1, notas[i]);
        } else{
            printf("M�dia do aluno %d: %.2f - REPROVADO\n", i+1, notas[i]);
        }

    }


    return 0;
}
