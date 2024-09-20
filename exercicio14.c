#include <stdio.h>

// funcao para converter de celsius para fahrenheit
float celsius_para_fahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// funcao para converter de fahrenheit para celsius
float fahrenheit_para_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

// funcao para exibir o menu de opcoes
void exibir_menu() {
    printf("\nmenu de conversao de temperatura:\n");
    printf("1. converter de celsius para fahrenheit\n");
    printf("2. converter de fahrenheit para celsius\n");
    printf("3. sair\n");
    printf("escolha uma opcao: ");
}

// funcao para obter a opcao escolhida pelo usuario
int obter_opcao() {
    int opcao;
    scanf("%d", &opcao);  // le a opcao escolhida pelo usuario
    return opcao;
}

int main() {
    int opcao;  // variavel para armazenar a opcao do usuario
    float temperatura, resultado;  // variaveis para temperatura e resultado da conversao

    // laco que exibe o menu ate que o usuario escolha a opcao de sair
    do {
        exibir_menu();  // exibe o menu de opcoes
        opcao = obter_opcao();  // obtem a opcao do usuario

        // avalia a opcao escolhida
        switch(opcao) {
            case 1:
                // caso o usuario escolha converter celsius para fahrenheit
                printf("digite a temperatura em celsius: ");
                scanf("%f", &temperatura);  // le a temperatura em celsius
                resultado = celsius_para_fahrenheit(temperatura);  // converte para fahrenheit
                printf("temperatura em fahrenheit: %.1fF\n", resultado);  // exibe o resultado
                break;

            case 2:
                // caso o usuario escolha converter fahrenheit para celsius
                printf("digite a temperatura em fahrenheit: ");
                scanf("%f", &temperatura);  // le a temperatura em fahrenheit
                resultado = fahrenheit_para_celsius(temperatura);  // converte para celsius
                printf("temperatura em celsius: %.1fC\n", resultado);  // exibe o resultado
                break;

            case 3:
                // caso o usuario escolha sair
                printf("saindo...\n");
                break;

            default:
                // caso o usuario escolha uma opcao invalida
                printf("opcao invalida! retornando ao menu principal.\n");  // string agora corretamente fechada
        }
    } while(opcao != 3);  // repete o menu ate o usuario escolher a opcao 3 (sair)

    return 0;  // finaliza o programa
}
