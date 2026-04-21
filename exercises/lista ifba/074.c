#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int *array, int size);
void insert_element(int *total_size, int *array, int number);
void index_insert_element(int index, int *array, int number);
void remove_index_element(int *total_size, int index, int *array);
void remove_all_matching(int *total_size, int *array, int target);
void set(int *array, int size);
int is_in(int number, int *array, int size);
void print_array(int *array, int size);


void fill_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        array[i] = rand() %50+1;
    }
}

void insert_element(int *total_size, int *array, int number) {
    
    array[*total_size] = number;
    (*total_size)++;
}

void index_insert_element(int index, int *array, int number) {

    array[index] = number;
}

void remove_index_element(int *total_size, int index, int *array) {

    for (int i = index; i < *total_size - 1; i++) {
        array[i] = array[i+1];
    }

    (*total_size)--;
}

void remove_all_matching(int *total_size, int *array, int target) {

    int new_size = 0;

    for (int i = 0; i < *total_size; i++) {
        if (array[i] != target) {
            array[new_size++] = array[i];
        }
    }

    *total_size = new_size;
}

void set(int *array, int size) {

    int index = 0, fake_domain[size];

    for (int i = 0; i < size; i++) {
        if (!is_in(array[i], fake_domain, index)) {
            fake_domain[index++] = array[i];
        }
    }

    int domain[index];

    for (int i = 0; i < index; i++) {
            domain[i] = fake_domain[i];
        
    }

    print_array(domain, index);
}

int is_in(int number, int *array, int size) {

    for (int i = 0; i < size; i++) {
        if (array[i] == number) {
            return 1;
        }
    }

    return 0;
}

void print_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        printf("Array %d: %d\n", i, array[i]);
    }
}

int main() {

    int total_size = 30, arr[total_size], opt = 1, x, index;
    srand(time(NULL));

    fill_array(arr, total_size);

    while (1) {

        printf(
            "\n(0) - Close the program.\n"
            "(1) - Insert an element at the end of the vector.\n"
            "(2) - Insert an element at a certain position.\n"
            "(3) - Remove an element at a certain position\n"
            "(4) - Remove all matching elements in the vector.\n"
            "(5) - Create a vector without duplicates.\n"
            "(6) - Print the current array.\n"
            "Choose an option: ");
            scanf("%d", &opt);

            if (opt == 0) {
                printf("Closing app...\n");
                break;
            }
            
            switch (opt) {
                
                case 1:
                    printf("Input a integer to insert at the end of the array: ");
                    scanf("%d", &x);
                    insert_element(&total_size, arr, x);
                    break;
                case 2:
                    printf("Input a integer to insert at a certain index of the array: ");
                    scanf("%d", &x);
                    printf("Input the desired index: ");
                    scanf("%d", &index);
                    index_insert_element(index, arr, x);
                    break;    
                case 3:
                    printf("Input a index to remove the matching element: ");
                    scanf("%d", &index);
                    remove_index_element(&total_size, index, arr);
                    break;
                case 4:
                    printf("Input the desired number to be removed: ");
                    scanf("%d", &x);
                    remove_all_matching(&total_size, arr, x);
                    break;
                case 5:
                    set(arr, total_size);
                    break;
                case 6:
                    print_array(arr, total_size);
            }
        }
    
    return 0;
}