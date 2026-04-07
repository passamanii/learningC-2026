#include <stdio.h>
#include <math.h>


float summation(int n) {

    float sum = 0, temp;

    for (int i = 1; i <= n; i++){
        temp = (pow((-1), i+1)/pow(((2*i) - 1), 3.0));
        sum += temp;
    }

    return sum;
}

int main() {

    int n, in;
    float soma;
    double pi;

    do {
        printf("Inform the amount N of terms for the sum: ");
        scanf("%d", &n);
        
        soma = summation(n);
        pi = cbrt(32 * soma);
        
        printf("The summation of the first %d terms of the determined sequence is: %.6f\n", n, pi);

        printf("Do you wish to try again? (YES - 1 | NO - 0)");
        scanf("%d", &in);

    } while (in != 0);

    return 0;
}