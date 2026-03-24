#include <stdio.h>


float calcula_raiz(int a, int b) {

    float x = ((float)(-b)/a);

    return x;
}

int main() {

    int a, b;
    float x;

    printf("Informe o valor do coeficiente A e do valor independente B (A B): ");
    scanf("%d %d", &a, &b);

    x = calcula_raiz(a, b);

    if (b>=0) {
        printf("O resultado da equacao %dx+%d=0 e: %.2f", a, b, x);
    } else if (b<0) {
        printf("O resultado da equacao %dx%d=0 e: %.2f", a, b, x);
    }
    return 0;
}