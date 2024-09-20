#include <stdio.h>

// funcao que converte o valor monetario entre moedas
void valormonetario(float valor_mon, char moeda_origem, char moeda_destino) {
    float valor_convertido = 0.0;  // variavel para armazenar o valor convertido

    // verifica as combinacoes de moedas para conversao
    if (moeda_origem == 'B' && moeda_destino == 'U') {
        valor_convertido = valor_mon * 0.19;  // conversao de BRL para USD
    } else if (moeda_origem == 'B' && moeda_destino == 'E') {
        valor_convertido = valor_mon * 0.16;  // conversao de BRL para EUR
    } else if (moeda_origem == 'U' && moeda_destino == 'B') {
        valor_convertido = valor_mon * 5.30;  // conversao de USD para BRL
    } else if (moeda_origem == 'E' && moeda_destino == 'B') {
        valor_convertido = valor_mon * 6.20;  // conversao de EUR para BRL
    } else if (moeda_origem == 'U' && moeda_destino == 'E') {
        valor_convertido = (valor_mon * 5.30) / 6.20;  // conversao de USD para EUR
    } else if (moeda_origem == 'E' && moeda_destino == 'U') {
        valor_convertido = (valor_mon * 6.20) / 5.30;  // conversao de EUR para USD
    } else {
        printf("erro: moeda de origem ou destino nao reconhecida.\n");  // mensagem de erro
        return;  // encerra a funcao se as moedas nao forem reconhecidas
    }

    // exibe o valor convertido
    printf("o valor convertido e: %.2f\n", valor_convertido);
}

int main() {
    float valor_mon;  // variavel para armazenar o valor monetario
    char moeda_origem, moeda_destino;  // variaveis para armazenar as moedas de origem e destino

    // solicita ao usuario o valor monetario
    printf("informe o valor que voce tem: ");
    scanf("%f", &valor_mon);  // le o valor informado

    // solicita a moeda de origem
    printf("informe a moeda de origem (B para BRL, U para USD, E para EUR): ");
    scanf(" %c", &moeda_origem);  // le a moeda de origem

    // solicita a moeda de destino
    printf("informe a moeda de destino (B para BRL, U para USD, E para EUR): ");
    scanf(" %c", &moeda_destino);  // le a moeda de destino

    // chama a funcao para converter o valor monetario
    valormonetario(valor_mon, moeda_origem, moeda_destino);

    return 0;  // finaliza o programa
}
