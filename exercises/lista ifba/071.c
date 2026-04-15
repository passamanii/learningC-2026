#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int *array, int size);
int sequential_search(int *array, int size, int number);
void print_array(int *array, int size);
void print_results(int number, int index);


void fill_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        array[i] = rand() %20+1;
    }
}

int sequential_search(int *array, int size, int number) {

    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            return i;
        }
    }

    return -1;
}

void print_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        printf("Array [%d]: %d\n", i+1, array[i]);
    }
}

void print_results(int number, int index) {

    switch (index) {

        case -1:
            printf("The number %d was not found in the array.\n", number);
            break;
        default:
            switch (index) {

                case 0:
                    printf("The number %d was found on the 1st position in the array.\n", number);
                    break;
                case 1:
                    printf("The number %d was found on the 2nd position in the array.\n", number);
                    break;
                case 2:
                    printf("The number %d was found on the 3rd position in the array.\n", number);
                    break;
                default:
                    printf("The number %d was found on the %dth position in the array.\n", number, index+1);
            }
    }
}

int main() {

    int arr[10], n, index;
    srand(time(NULL));

    fill_array(arr, 10);

    printf("Input a integer for the verification: ");
    scanf("%d", &n);

    index = sequential_search(arr, 10, n);

    print_results(n, index);
    print_array(arr, 10);

    return 0;
}