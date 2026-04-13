#include <stdio.h>
#include <stdlib.h>


void create_array(int *destiny_array, int size) {

    for (int i = 0; i < size; i++) {
        destiny_array[i] = rand() %200+1; 
    }
}

void print_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        printf("Array[%d]: %d.\n", i+1, array[i]);
    }
}

int verify_number_in_array(int *array, int x) {

    int quant = 0;

    for (int i = 0; i < 20; i++) {
        if (array[i] == x) {
            quant++;
        }
    }

    return quant;
}

int main() {

    int quantity, n, arr[20];

    create_array(arr, 20);
    print_array(arr, 20);

    printf("Input a integer to verify: ");
    scanf("%d", &n);

    quantity = verify_number_in_array(arr, n);

    switch (quantity) {

        case 0:
            printf("There are no %d in this array.\n", n);
            break;
        default:
            printf("There are %02d %d in this array.\n", quantity, n);
    }

    return 0;
}