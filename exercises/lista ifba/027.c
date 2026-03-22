#include <stdio.h>


float calcular_media(int a, int b, int c) {

    int i, p, maior=-999999999, num[] = {a, b, c};
    float pesos[3] = {2.5, 2.5, 2.5};

    for (i=0; i<3; i++) {
        if (num[i] > maior) {
            maior = num[i];
            p = i;
        }
    }

    pesos[p] = 5;
    float media_pond = (((a*pesos[0])+(b*pesos[1])+(c*pesos[2]))/10);

    return media_pond;
}

int main() {

    int a, b, c;

    printf("INFORM THE THREE DESIRED NUMBERS(x x x): ");
    scanf("%d %d %d", &a, &b, &c);

    float media_ponderada = calcular_media(a, b, c);
    printf("THE PONDERATE MEDIA OF %d, %d AND %d IS: %.2f.", a, b, c, media_ponderada);

    return 0;
}