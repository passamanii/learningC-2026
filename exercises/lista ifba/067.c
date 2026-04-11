#include <stdio.h>
#include <stdlib.h>

void print_array(int *arr, int size, int num_array);
void number_comparator(int *array1, int *array2, int *array3, int size);


void print_array(int *arr, int size, int num_array) {

    switch (num_array) {

        case 1:
            printf("\n%dst Array:\n", num_array);
            break;
        case 2:
            printf("\n%dnd Array:\n", num_array);
            break;
        case 3:
            printf("\n%drd Array:\n", num_array);
            break;
        default:
            printf("\n%dth Array:\n", num_array);
            break;
    }

    for (int i = 0; i < size; i++) {
        printf("Array [%d]: %d\n", i, arr[i]);
    }
}

void number_comparator(int *array1, int *array2, int *array3, int size) {

    for (int i = 0; i < size; i++) {
        if (array1[i] > array2[i]) {
            array3[i] = array1[i];
        } else {
            array3[i] = array2[i];
        }
    }
}

int main() {

    int arr[10], arr2[10], arr3[10];

    for (int i = 0; i < 10; i++) {
        arr[i] = rand() %200+1;
        arr2[i] = rand() %200+1;
    }

    print_array(arr, 10, 1);
    print_array(arr2, 10, 2);

    number_comparator(arr, arr2, arr3, 10);

    print_array(arr3, 10, 3);

    return 0;
}