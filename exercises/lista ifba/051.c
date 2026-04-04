#include <stdio.h>


void generate_fibonacci(int n) {

    int fibonacci[n];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    
    printf("%d numero: %d.\n", 1, fibonacci[0]);
    printf("%d numero: %d.\n", 2, fibonacci[1]);

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        printf("%d numero: %d.\n", i+1, fibonacci[i]);
    }
}

int main() {

    int n;

    printf("Inform the quantity of terms for the Fibonacci Sequence: ");
    scanf("%d", &n);

    generate_fibonacci(n);

    return 0;
}