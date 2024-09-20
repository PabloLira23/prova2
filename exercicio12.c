#include <stdio.h>

int main() {

    int num_int, i;

    for(i = 1; i <= 6; i++){
        printf("Digite um número inteiro: ");
        scanf("%d", &num_int);

        if(num_int % 2 == 0){
            if(num_int == 10){
                printf("É um número PAR e é 10");
                printf("\n\n");
            } else if(num_int > 10){
                printf("É um número PAR e MAIOR QUE 10");
                printf("\n\n");
            } else if(num_int < 10){
                printf("É um número PAR, MAS MENOR QUE 10");
                printf("\n\n");
            }
        } else{
            if(num_int < 50){
                printf("É IMPAR E MENOR QUE 50");
                printf("\n\n");
            } else{
                printf("É IMPAR E NAO É MENOR QUE 50");
                printf("\n\n");
            }
        }
    }


    return 0;
}
