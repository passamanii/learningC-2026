#include <stdio.h>
#include <stdlib.h>


void list_copy(int *array_origin, int *array_destiny) {

    for (int i = 0; i < 10; i++) {
        array_destiny[i] = array_origin[i];
    }
}

int main() {

    int arr[10], arr_copy[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() %200+1;
        printf("Array %d: %d\n", i, arr[i]);
    }

    printf("\n");

    list_copy(arr, arr_copy);

    for (int i = 0; i < 10; i++) {
        printf("Array Copy %d: %d\n", i, arr_copy[i]);
    }

    return 0;
}