#include <stdio.h>

int main () {
    float nota;
    int i;

    for (i=1; i <= 8; i++) {
        printf ("Informe uma nota de 1 a 10: ");
        scanf ("%f", &nota);
        while(nota < 0 || nota > 10){
            printf("Informe uma nota válida: ");
            scanf("%f", &nota);
        }

        if (nota > 9 && nota <= 10) {
            printf("Nota: A\n\n");
        }else if (nota >= 7 && nota <= 8.9) {
            printf("Nota: B\n\n");
        }else if (nota >= 5 && nota <= 6.9) {
            printf("Nota: C\n\n");
        }else if (nota >= 3 && nota <= 4.9) {
            printf("Nota: D\n\n");
        }else{
            printf("Nota: F\n\n");
        }
    }



    return 0;
}
