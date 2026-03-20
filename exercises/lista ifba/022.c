#include <stdio.h>


float module_func(float number) {

    if (number < 0) {
        return -number;
    } else {
        return number;
    }
}

int main() {

    float n, module;

    printf("Type the desired number: ");
    scanf("%f", &n);

    module = module_func(n);
    printf("The module of %.2f is: %.2f", n, module);
    return 0;
}