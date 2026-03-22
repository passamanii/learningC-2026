#include <stdio.h>


float calc_discount(int wage) {

    float discount = (0.11*wage);

    if (discount > 334.29) {
        return 334.29;
    }

    return discount;
}

int main() {

    float wage, disc;

    printf("TYPE YOUR WAGE: ");
    scanf("%f", &wage);

    disc = calc_discount(wage);
    wage -= disc;

    printf("YOUR DISCOUNTED SALARY IS: %.2f", wage);

    return 0;
}