#include <stdio.h>

int sum(int num) {

    static int sum = 0;
    sum += num;
    return sum;
}

int main() {

    int numbers[] = {1, 2, 3};
    int i;

    for (i=0; i<4; i++) {

        sum(numbers[i]);
    }

    int soma = sum(0);
    printf("Soma final: %d", soma);

    return 0;
}