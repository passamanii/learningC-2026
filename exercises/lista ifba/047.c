#include <stdio.h>


int calc_module(int a, int b) {
    
    int r;
    
    while (a >= b) {
        a -= b;
    }

    r = a;

    return r;
}

int main() {
    
    int a, b, resto;

    printf("Inform two integers numbers(A B): ");
    scanf("%d %d", &a, &b);

    resto = calc_module(a, b);

    printf("The module of the respective division is: %d.", resto);

    return 0;
}