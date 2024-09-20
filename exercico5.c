#include <stdio.h>

int main(){

    int i, num, imp, par, imp_cont, par_cont;

    imp_cont = 0;
    par_cont = 0;

    for(i = 1; i <= 10; i++){
        printf("Insira um número inteiro: ");
        scanf("%d", &num);

        if(num % 2 == 0){
            par_cont = par_cont + 1;
            par = num;
            printf("%d - PAR\n\n", par);
        }else{
            imp_cont = imp_cont + 1;
            imp = num;
            printf("%d - ÍMPAR\n\n", imp);
        }

    }

    printf("QTD IMPAR - %d\n", imp_cont);
    printf("QTD PAR - %d\n", par_cont);


    return 0;
}
