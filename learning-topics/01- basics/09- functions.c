#include <stdio.h>


void print_big(int number) {

    if (number > 10) {
        printf("%d is big.\n", number);
    } else {
        printf("Nothing happened...\n");
    }
}

int main() {

    int numbers[] = {1, 2, 3, 6, 8, 10, 12, 18, 21};
    int i;

    for (i=0; i < 9; i++) {
        print_big(numbers[i]);
    }

    return 0;
}