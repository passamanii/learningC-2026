#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int *array, int size);
void bubble_sort(int *array, int size);
void print_array(int *array, int size);
int binary_search(int *array, int size, int target);
void print_result(int index, int number);


void fill_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        array[i] = rand() %30+1;
    }
}

void bubble_sort(int *array, int size) {

    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void print_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        printf("Array %d: %d\n", i+1, array[i]);
    }
}

int binary_search(int *array, int size, int target) {

    int start = 0, end = size-1;

    while (start <= end) {
        int middle = (start+end)/2;

        if (array[middle] == target) {
            return middle;
        } else if (array[middle] < target) {
            start = middle + 1;
        } else {
            end = middle - 1;
        }
    }

    return -1;
}

void print_result(int index, int number) {

    switch (index) {

        case -1:
            printf("There was no such number in this list.\n");
            break;
        case 0: 
            printf("The number (%d) was found on the 1st position.\n", number);
            break;
        case 1: 
            printf("The number (%d) was found on the 2nd position.\n", number);
            break;
        case 2: 
            printf("The number (%d) was found on the 3rd position.\n", number);
            break;
        default: 
            printf("The number (%d) was found on the %dth position.\n", number, index+1);
    }
}

int main() {

    int index, x, array[10];
    srand(time(NULL));

    fill_array(array, 10);
    bubble_sort(array, 10);

    printf("Input a integer to be searched: ");
    scanf("%d", &x);

    index = binary_search(array, 10, x);

    print_result(index, x);
    print_array(array, 10);

    return 0;
}