#include <stdio.h>


int main() {

    int grade[] = {80, 85, 90};
    float media = ((grade[0]+grade[1]+grade[2])/3);

    printf("A media das notas %d, %d e %d e: %.2f", grade[0], grade[1], grade[2], media);
    return 0;
}