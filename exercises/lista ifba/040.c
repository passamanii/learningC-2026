#include <stdio.h>


void display_number(int n) {

    int dezena, unidade;

    char *unidades[] = {
        "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"
    };

    char *jovens[] = {
        "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete", "dezoito", "dezenove"
    };

    char* dezenas[] = {
        "dez", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta", "oitenta", "noventa"
    };

    unidade = ((n%10)-1);
    dezena = ((n/10)-1);

    if (n == 100) {
        printf("cem\n");
    } else if (n < 10) {
        printf("%s.", unidades[unidade]);
    } else if (n < 20) {
        printf("%s", jovens[unidade]);
    } else if (n%10 == 0) {
        printf("%s", dezenas[dezena]);
    } else {
        printf("%s e %s", dezenas[dezena], unidades[unidade]);
    }
}

int main() {

    int num;

    while (1) {
        printf("Inform the desired number: ");
        scanf("%d", &num);

        if (num < 1 || num > 100) {
            printf("Invalid number. Please inform a number between [1-100].\n");
            continue;
        } 
        break;
    }

    display_number(num);

    return 0;
}