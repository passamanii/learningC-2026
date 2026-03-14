#include <stdio.h>
#include <math.h>


float calculate_volume(int radius, int height) {

    float volume = ((3.14*(pow(radius, 2)))*height);
    
    return volume;
}

int main() {

    int r, h;
    float vol;

    printf("Informe o raio da lata e a sua altura no formato (XX XX): ");
    scanf("%d %d", &r, &h);

    vol = calculate_volume(r, h);
    printf("The volume of a oil can with %d of radius and %d of height is: %.2f", r, h, vol);

    return 0;
}