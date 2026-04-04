#include <stdio.h>


void generate_fetuccine(int a1, int a2, int n) {

    int fetuccine[n];
    fetuccine[0] = a1;
    fetuccine[1] = a2;

    printf("%d number is: %d.\n", 1, fetuccine[0]);
    printf("%d number is: %d.\n", 2, fetuccine[1]);

    for (int i = 2; i < n; i++) {
        if (i % 2 == 0) {
            fetuccine[i] = fetuccine[i-1] - fetuccine[i-2];
            printf("%d number is: %d.\n", i+1, fetuccine[i]);
        } else {
            fetuccine[i] = fetuccine[i-1] + fetuccine[i-2];
            printf("%d number is: %d.\n", i+1, fetuccine[i]);
        }
    }
}

int main() {

    int a1, a2, n;

    printf("Inform the first installment: ");
    scanf("%d", &a1);
    
    printf("Inform the second installment: ");
    scanf("%d", &a2);

    printf("Inform the total installments for the Fetuccine Sequence: ");
    scanf("%d", &n);

    generate_fetuccine(a1, a2, n);

    return 0;
}