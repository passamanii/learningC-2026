#include <stdio.h>


void calcula_parcelas(float v) {

    int inteiro = (int)v;
    int base_calculo = (inteiro/3);
    int parcela = ((base_calculo/10)*10);
    float entrada = (v-(2*parcela));

    printf("O valor de R$%.2f sera parcelado em 2 parcelas de R$%d,00 + 1 entrada de R$%.2f.", v, parcela, entrada);
}

int main() {

    float valor;

    printf("Insira o valor desejado para parcelar: ");
    scanf("%f", &valor);

    calcula_parcelas(valor);

    return 0;
}