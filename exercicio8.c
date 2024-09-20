#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//stdlib serve para incluir a função rand()
//time é para poder usar usar o srand(time(0)), que é uma função que está garantindo que o programa sempre gere um número diferente

int main(){

    int num, i, resp;

    srand(time(0));
    num = (rand() % 100) + 1;
    printf("%d\n", num); // apenas para consulta no ato de testar


    for(i = 1; i <= 7; i++){
        printf("Adivinhe o número que foi gerado: ");
        scanf("%d", &resp);

        if(resp < num){
            printf("O número é MAIOR!");
            printf("\n\n");
        }else if(resp > num){
            printf("O número é MENOR!");
            printf("\n\n");
        }else if(resp == num){
            printf("Parabéns! Você acertou. O número é: %d", num);
            break;
        }

        if(i == 7){
            printf("Você tentou 7 vezes e errou. O número era: %d", num);
        }
    }


    return 0;
}
