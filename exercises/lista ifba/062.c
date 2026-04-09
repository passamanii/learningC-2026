#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {

    int even = 0, arr[10];
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 200 + 0;
        printf("Number: %d | Index: %d\n", arr[i], i);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
    }

    printf("There are %d even numbers in the array.", even);

    return 0;
}