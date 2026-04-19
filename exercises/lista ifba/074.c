#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill_array(int *array, int size);


void fill_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        array[i] = rand() %200+(-50);
    }
}

int main() {

    int arr[30], opt;
    srand(time(NULL));

    fill_array(arr, 30);

    printf("(1) - Insert an element at the end of the vector.\n"
        "(2) - Insert an element at a certain position.\n"
        "(3) - Remove an element at a certain position\n"
        "(4) - Remove all matching elements in the vector.\n"
        "(5) - Create a vector without duplicates.\n"
        "Escolha uma opção: ");
    scanf("%d", &opt);

    switch (opt) {

        case 1:

        case 2:
        
        case 3:

        case 4:

        case 5:
    }
}