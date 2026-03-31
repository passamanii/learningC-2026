#include <stdio.h>


int main() {

    int n = 1;
    int *pointer_to_n = &n;

    printf("THE ORIGINAL VALUE OF N: %d.\n", n);

    *pointer_to_n += 9;

    printf("THE NEW VALUE OF N: %d.\n", n);

    return 0;
}