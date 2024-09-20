#include <stdio.h>

// funcao que determina a nota geral com base na nota informada
void notageral(float nota) {
    // verifica a nota e imprime a correspondente
    if (nota >= 9.0) {
        printf("A");  // nota A para notas maiores ou iguais a 9.0
    }
    else if (nota >= 7.0 && nota < 9.0) {
        printf("B");  // nota B para notas entre 7.0 e 9.0
    }
    else if (nota >= 5.0 && nota < 7.0) {
        printf("C");  // nota C para notas entre 5.0 e 7.0
    }
    else if (nota < 5.0) {
        printf("D");  // nota D para notas menores que 5.0
    }
}

// funcao principal do programa
int main () {
    float nota;  // variavel para armazenar a nota do aluno

    // solicita ao usuario a nota do aluno
    printf("informe a nota do aluno: ");
    scanf("%f", &nota);  // le a nota informada

    // verifica se a nota esta dentro do intervalo valido
    if(nota < 0 || nota > 10){
        printf("voce digitou uma nota fora do intervalo, amigao. me ajuda a te ajudar, po!");  // mensagem de erro
    }

    // chama a funcao para determinar a nota geral
    notageral(nota);

    return 0;  // finaliza o programa
}
