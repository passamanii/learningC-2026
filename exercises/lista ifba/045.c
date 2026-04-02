#include <stdio.h>


float calc_media(int a, int b, int c, int d, int e) {

    float m = ((a+b+c+d+e)/5.0);

    return m;
}

int main() {

    int a, b, c, d, e;

    printf("Inform 5 integers numbers(X X X X X): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    float media = calc_media(a, b, c, d, e);

    printf("The media of the informed numbers is: %.2f.", media);

    return 0;
}