#include <stdio.h>


int verify_triangular_number(int n) {

    for (int i = 1; i <= n/2; i++) {
        if ((i*(i+1)*(i+2)) == n) {
            return 1;
        }
    }

    return 0;
}

int main() {

    int bool, n;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    bool = verify_triangular_number(n);

    switch (bool) {

        case 0:
            printf("The number %d is NOT triangular.", n);
            break;

        case 1:
            printf("The number %d IS triangular.", n);
            break;
    }
    
}