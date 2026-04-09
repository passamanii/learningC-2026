#include <stdio.h>

double taylor_series(int n);
int factorial(int x);


double taylor_series(int n) {

    double sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += ((1.0)/(factorial(i)));
    }

    return sum;
}

int factorial(int x) {

    if (x <= 1 ) {
        return 1;
    }
 
    return x * factorial(x-1);
}

int main() {

    int n; 
    double euler;

    printf("Input a integer for the quantity of terms for the Taylor Series: ");
    scanf("%d", &n);

    euler = taylor_series(n);

    printf("The approximated euler number, by the Taylor Series is: %.8f", euler);

    return 0;
}