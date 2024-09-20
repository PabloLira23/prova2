#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//stdlib serve para incluir a fun��o rand()
//time � para poder usar usar o srand(time(0)), que � uma fun��o que est� garantindo que o programa sempre gere um n�mero diferente

int main(){

    int num, i, resp;

    srand(time(0));
    num = (rand() % 100) + 1;
    printf("%d\n", num); // apenas para consulta no ato de testar


    for(i = 1; i <= 7; i++){
        printf("Adivinhe o n�mero que foi gerado: ");
        scanf("%d", &resp);

        if(resp < num){
            printf("O n�mero � MAIOR!");
            printf("\n\n");
        }else if(resp > num){
            printf("O n�mero � MENOR!");
            printf("\n\n");
        }else if(resp == num){
            printf("Parab�ns! Voc� acertou. O n�mero �: %d", num);
            break;
        }

        if(i == 7){
            printf("Voc� tentou 7 vezes e errou. O n�mero era: %d", num);
        }
    }


    return 0;
}
