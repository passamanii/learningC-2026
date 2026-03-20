#include <stdio.h>
#include <string.h>


char* check_number(int number) {

    if (number%2 == 0) {
        static char veredict[] = "even";
        return veredict;
    } else {
        static char veredict[] = "odd";
        return veredict;
    }
}

int main() {

    int n;

    while (1) {
        printf("Type the desired number: ");
        scanf("%d", &n);
        
        if (n == 0) {
            break;
        }

        char result[5]; 
        strcpy(result, check_number(n));
        printf("The number %d is %s.\n", n, result);
    }

    return 0;
}