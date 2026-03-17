#include <stdio.h>


float calcula_altura_predio(int altura_pessoa, float cabe_quantas) {

    float altura_predio = (altura_pessoa*cabe_quantas);

    return altura_predio;
}

int main() {

    int altura;
    float x;

    printf("Informe a sua altura em cm: ");
    scanf("%d", &altura);

    printf("Informe quantas vezes a sua sombra cabe na sombra do predio: ");
    scanf("%f", &x);

    float altura_predio = calcula_altura_predio(altura, x);
    printf("A altura do predio é: %.2fm.", altura_predio);

    return 0;
}