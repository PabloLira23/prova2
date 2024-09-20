#include <stdio.h>
#include <math.h>
//inclui a biblioteca math.h para poder usar a fun��o sqrt, que pega a raiz quadrada de um n�mero.

int main(){
    int i, cont, num1, num2, tmp, qtd_primo, primo;


    printf("Informe um n�mero inteiro positivo (valor inicial): ");
    scanf("%d", &num1);
    while(num1 <= 0){
        printf("Informe um n�mero INTEIRO POSITIVO: ");
        scanf("%d", &num1);
    }
    printf("Informe outro n�mero inteiro positivo (valor final): ");
    scanf("%d", &num2);
    while(num2 <= 0){
        printf("Informe um n�mero INTEIRO POSITIVO: ");
        scanf("%d", &num2);
    }


    if(num1 > num2){
        tmp = num2;
        num2 = num1;
        num1 = tmp;
    }

    qtd_primo = 0;
    for(i = num1; i <= num2; i++){
        if(i < 2){
            continue; //ele vai pular a execu��o do resto do loop caso o i seja menor que 2.
                      //Qualquer n�mero menor que 2 n�o � primo.
        }



        primo = 1;
        //iniciei essa vari�vel com 1 (verdadeiro).

        //pra saber se um num � primo ou n�o, a gente precisa saber se ele pode ser dividido com algu�m entre 2 e a raiz dele -
        // a� a import�ncia da math.h l� em cima...
        for(cont = 2; cont <= sqrt(i); cont++){
            if(i % cont == 0){
                primo = 0;
                break;
            }
        }

            if(primo){
                printf("%d\n", i);
                qtd_primo = qtd_primo + 1;
            }

    }

    if(qtd_primo == 0){
        printf("N�o h� n�meros primos neste intervalo!");
    }




    return 0;
}
