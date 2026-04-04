#include <stdio.h>


int is_it_prime(int n) {

    int state, divisors = 0;

    for (int i = 1; i <= n; i++) {
        if  (n%i == 0) {
            printf("%d\n", i);
            divisors++;
        }
    }

    if (divisors <= 2) {
        state = 1;
    } else {
        state = 0;
    }
    
    return state;
}

int main() {

    int n, state;

    printf("Inform a integer number: ");
    scanf("%d", &n);

    state = is_it_prime(n);

    if (state == 1) {
        printf("The number %d is prime.", n);
    } else {
        printf("The number %d is NOT prime.", n);
    }

    return 0;
}