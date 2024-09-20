#include <stdio.h>

int main (void) {
    int num, i, divisor;

    printf("Escreva um n�mero positivo inteiro: ");
    scanf("%d", &num);
    while(num < 1){
        printf("Digite um n�mero POSITIVO INTEIRO: ");
        scanf("%d", &num);
    }


    divisor = 0;
    for(i = 1; i < num; i++){
        if(num % i == 0){
            divisor = divisor + i;
        }
    }

    if(divisor == num){
        printf("N�mero perfeito.");
    } else{
        printf("N�mero imperfeito.");
    }

    //exemplos de n�meros para testar: 6 e 28 (perfeitos)


    return 0;
}
