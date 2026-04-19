#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int *array, int size);
void bubble_sort(int *array, int size);
int mode_array(int *array, int size);
float median_array(int *array, int size);
float mean_array(int *array, int size);


void fill_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        array[i] = rand() %20+1;
    }
}

void print_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        printf("Array %d: %d\n", i+1, array[i]);
    }
}

int mode_array(int *array, int size) {

    int max_repeat = 0, number = array[0];

    for (int i = 0; i < size; i++) {
        int repeat = 0;
        for (int j = 0; j < size; j++) {
            if (array[i] == array[j]) {
                repeat++;
            }
        }
        if (repeat > max_repeat) {
            number = array[i];
            max_repeat = repeat;
        }
    }

    return number;
}

float median_array(int *array, int size) {

    bubble_sort(array, size);

    float median;
    int middle = (size/2);

    if (size % 2 == 1)  {
        median = array[middle];
    } else {
        median = ((array[middle] + array[middle+1])/2);
    }

    return median;
}

float mean_array(int *array, int size) {

    float mean = 0;

    for (int i = 0; i < size; i++) {
        mean += array[i];
    }

    mean /= size;

    return mean;
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

int main() {

    int arr[20], mode;
    float median, mean;
    srand(time(NULL));

    fill_array(arr, 20);

    mode = mode_array(arr, 20);
    median = median_array(arr, 20);
    mean = mean_array(arr, 20);

    print_array(arr, 20);

    printf("The mode (moda) of the array is: %d\n", mode);
    printf("The median (mediana) of the array is: %.2f\n", median);
    printf("The mean (media) of the array is: %.2f\n", mean);

    return 0;
}