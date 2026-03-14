#include <stdio.h>


void calcula_idade(int d, int idade[3]) {

    idade[0] = (d/360);
    idade[1] = ((d%360)/30);
    idade[2] = ((d%360)%30);
}

int main() {

    int dias, idade[3];

    printf("Informe a sua idade em dias: ");
    scanf("%d", &dias);

    calcula_idade(dias, idade);

    printf("%d anos, %d meses e %d dias.", idade[0], idade[1], idade[2]);

    return 0;
}