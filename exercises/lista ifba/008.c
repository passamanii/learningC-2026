#include <stdio.h>


float fah_to_cel(int fahrenheit) {

    int celsius = ((5.0/9.0)*(fahrenheit-32));
    return celsius;
}

int main() {

    int fah;

    printf("Informe um valor em Fahrenheit: ");
    scanf("%d", &fah);

    float cel = fah_to_cel(fah);
    printf("A temperatura %dF corresponde a %.1fC", fah, cel);

    return 0;
}