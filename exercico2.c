#include <stdio.h>

int main (void) {
    int num, i, divisor;

    printf("Escreva um número positivo inteiro: ");
    scanf("%d", &num);
    while(num < 1){
        printf("Digite um número POSITIVO INTEIRO: ");
        scanf("%d", &num);
    }


    divisor = 0;
    for(i = 1; i < num; i++){
        if(num % i == 0){
            divisor = divisor + i;
        }
    }

    if(divisor == num){
        printf("Número perfeito.");
    } else{
        printf("Número imperfeito.");
    }

    //exemplos de números para testar: 6 e 28 (perfeitos)


    return 0;
}
