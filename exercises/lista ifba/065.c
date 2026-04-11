#include <stdio.h>
#include <stdlib.h>


int main() {

    int biggest, big_i, smallest, small_i, arr[20];

    printf("\n");
    for (int i = 0; i < 20; i++) {
        arr[i] = rand() %200+1;
        printf("Array %d: %d\n", i+1, arr[i]);
    }

    smallest = biggest = arr[0];

    for (int i = 1; i < 20; i++) {
        if (arr[i] > biggest) {
            biggest = arr[i];
            big_i = i;
        } else if (arr[i] < smallest) {
            smallest = arr[i];
            small_i = i;
        }
    }

    printf("\nBiggest: %d | Index: %d\n", biggest, big_i);
    printf("Smallest: %d | Index: %d\n\n", smallest, small_i);

    return 0;
}