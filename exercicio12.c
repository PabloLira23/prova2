#include <stdio.h>

int main() {

    int num_int, i;

    for(i = 1; i <= 6; i++){
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &num_int);

        if(num_int % 2 == 0){
            if(num_int == 10){
                printf("� um n�mero PAR e � 10");
                printf("\n\n");
            } else if(num_int > 10){
                printf("� um n�mero PAR e MAIOR QUE 10");
                printf("\n\n");
            } else if(num_int < 10){
                printf("� um n�mero PAR, MAS MENOR QUE 10");
                printf("\n\n");
            }
        } else{
            if(num_int < 50){
                printf("� IMPAR E MENOR QUE 50");
                printf("\n\n");
            } else{
                printf("� IMPAR E NAO � MENOR QUE 50");
                printf("\n\n");
            }
        }
    }


    return 0;
}
