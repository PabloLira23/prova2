#include <stdio.h>

int main(){

    float inv, j_anual, v_acum;
    int i, anos;

    printf("Informe o valor inicial do investimento: ");
    scanf("%f", &inv);
    printf("Agora informe a taxa de juros anual em porcentagem: ");
    scanf("%f", &j_anual);
    printf("Quantos anos será investido? ");
    scanf("%d", &anos);

    v_acum = inv;
    for(i = 1; i <= anos; i++){
        v_acum = v_acum * (1 + (j_anual/100));
        printf("Ano %d: %.2f\n", i, v_acum);
    }


    return 0;
}
