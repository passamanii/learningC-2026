#include <stdio.h>


int verify_perfect_number(int x) {

    int div_sum = 0;

    for (int i = 1; i <= x/2; i++) {
        if (x % i == 0) {
            div_sum += i;
        }
    }

    if (div_sum == x) {
        return 1;
    }

    return 0;
}

int main() {

    int bool, x;

    printf("Insert a integer number: ");
    scanf("%d", &x);

    bool = verify_perfect_number(x);

    switch (bool) {

        case 0:
            printf("The number %d is NOT perfect.", x);
            break;

        case 1:
            printf("The number %d IS perfect.", x);
    }

    return 0;
}