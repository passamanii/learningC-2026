#include <stdio.h>
#include <math.h>


int calculate_area(int side) {

    int area = pow(side, 2);
    return area;
}

int calculate_perimeter(int side) {

    int perimeter = (4*side);
    return perimeter;
}

int main() {

    int lado;

    printf("Insira o tamanho do lado do quadrado:");
    scanf("%d", &lado);

    int area = calculate_area(lado);
    int perimeter = calculate_perimeter(lado);

    printf("AREA: %d.\n"
        "PERIMETER: %d.", area, perimeter);
}

