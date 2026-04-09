#include <stdio.h>
#include <stdlib.h>


int main() {

    float arr1[10], arr2[10] = {0}, arr3[10];
    float *arrs[3] = {arr1, arr2, arr3};

    for (int f = 0; f < 2; f++) {
        for (int i = 0; i < 10; i++) {
            arrs[f][i] = rand() %200 + 10;
            arr3[i] = arr1[i] + arr2[i];
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("Array 1, Index[%d]: %.2f\n", i, arr1[i]);
        printf("Array 2, Index[%d]: %.2f\n", i, arr2[i]);
        printf("Resultant Array, Index[%d]: %.2f\n", i, arr3[i]);
    }

    return 0;
}