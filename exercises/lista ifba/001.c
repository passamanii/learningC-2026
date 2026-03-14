#include <stdio.h>


int calculate_area(int base, int height) {

    float area = (base*height);

    return area;
}

int calculate_perimiter(int base, int height) {

    float perimeter = ((2*base)+(2*height));

    return perimeter;
}

int main() {

    int base, altura;

    printf("Insira o comprimento da base do retângulo:");
    scanf("%d", &base);

    printf("Insira o comprimento da altura do retângulo:");
    scanf("%d", &altura);

    int area = calculate_area(base, altura);
    int perimeter = calculate_perimiter(base, altura);

    printf("AREA: %d\n"
        "PERIMETER: %d", area, perimeter);

    return 0;
}