#include <stdio.h>


void calcula_notas(int v) {

    int cem, cinquenta, vinte, dez, cinco, dois, um;

    cem = (v/100);
    cinquenta = ((v%100)/50);
    vinte = (((v%100)%50)/20);
    dez = ((((v%100)%50)%20)/10);
    cinco = (((((v%100)%50)%20)%10)/5);
    dois = ((((((v%100)%50)%20)%10)%5)/2);
    um = ((((((v%100)%50)%20)%10)%5)%2);

    printf("Voce ira receber:\n"
        "R$100: %d NOTAS\n"
        "R$50: %d NOTAS\n"
        "R$20: %d NOTAS\n"
        "R$10: %d NOTAS\n"
        "R$5: %d NOTAS\n"
        "R$2: %d NOTAS\n"
        "R$1: %d NOTAS", cem, cinquenta, vinte, dez, cinco, dois, um);
}

int main() {

    int valor;

    printf("Informe o valor a ser retirado: ");
    scanf("%d", &valor);

    calcula_notas(valor);

    return 0;
}