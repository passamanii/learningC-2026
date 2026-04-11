#include <stdio.h>
#include <stdlib.h>


void print_array(int *arr, int size, int num_array) {

    switch (num_array) {
        case 1: 
            printf("\n1st Array:");
        case 2: 
            printf("\n2nd Array:");
        case 3: 
            printf("\n3rd Array:");
        default: 
            printf("\n%dth Array:", num_array);
    }

    for (int i = 0; i < size; i++) {
        printf("Array %d: %d\n", i+1, arr[i]);
    }
}

int main() {

    int arr[30];

    for (int i = 0; i < 30; i++) {
        int temp;

        printf("Pluviometer Index | Day %d: ", i+1);
        scanf("%d", &temp);
        arr[i] = temp;
    }

}