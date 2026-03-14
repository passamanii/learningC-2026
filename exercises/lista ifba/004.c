#include <stdio.h>

int calculate_perimeter(int a, int b, int c) {

    int perimeter = (a+b+c);
    return perimeter;
}

int main() {

    int lados[3];
    printf("Informe os lados de um triângulo no formato (X Y Z): ");
    scanf("%d %d %d", &lados[0], &lados[1], &lados[2]);

    int perimeter = calculate_perimeter(lados[0], lados[1], lados[2]);
    printf("PERIMETER: %d", perimeter);

    return 0;
}