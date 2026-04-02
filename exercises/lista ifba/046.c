#include <stdio.h>


int calc_division(int a, int b) {

    int quociente = 0;

    while (a >= b) {
        a -= b;
        quociente += 1;
    }

    return quociente;
}

int main() {

    int A, B;

    printf("Inform the numerator and the denominator(A B): ");
    scanf("%d %d", &A, &B);

    int r = calc_division(A, B);

    printf("The result of the division is: %d.", r);

    return 0;
}