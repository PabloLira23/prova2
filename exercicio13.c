#include <stdio.h>

int main () {
    int menu, cel, fah, resposta;
    while (menu = resposta) {
        switch (menu)
        {
            case 1:
                printf ("Você escolheu converter de Celsius para Fahrenheit ");
                scanf ("%d", &resposta);
            break;
            case 2 :
                printf ("Converter de Fahrenheit para Celsius ");
                scanf ("%d", &resposta);
            break;
            case 3:
                scanf ("%d", &resposta);
                return 0;
            break;

        }
    }

    return 0;
}
