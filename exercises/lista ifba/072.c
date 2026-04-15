#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void fill_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        array[i] = rand() %30+1;
    }
}

void sort_array(int *array, int size) {

}

int binary_search(int *array, int size, int target) {

}

int main() {

    int x, array[10];

    fill_array(array, 10);
    sort_array(array, 10);

    printf("Input a integer to be searched: ");
    scanf("%d", &x);

    binary_search(array, 10, x);
}