#include <stdio.h>
#include <math.h>


float calculate_area(int radius) {

    float area = (3.14*(pow(radius, 2)));
    return area;
}

float calculate_perimeter(int radius) {

    float perimeter = (2*3.14*radius);
    return perimeter;
} 

int main() {

    int radius;

    printf("Informe o raio da circunferencia: ");
    scanf("%d", &radius);

    float area = calculate_area(radius);
    float perimeter = calculate_perimeter(radius);

    printf("AREA: %.2f\n"
        "PERIMETER: %.2f", area, perimeter);
    
    return 0;
}