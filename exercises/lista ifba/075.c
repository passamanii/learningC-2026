#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void fill_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        array[i] = rand() %50+1;
    }
}

void print_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        printf("Array %02d: %d\n", i, array[i]);
    }
}

/*
a) size - 1 --> faz sentido porque estou comparando o atual com o próximo, não podendo chegar em size e compará-lo com lixo.
b) size - i --> faz sentido porque ao final de cada iteração de i, o último termo da lista será o maior dentre todos os termos, não havendo necessidade de incluí-lo nas próximas comparações.
c) O algoritmo bubble sorting compara o número atual com o seu sucessor, deixando sempre o maior mais à direita. Ao final de cada iteração i, o maior número se aglomera no final da lista, restando cada vez menos números à serem comparados, até que a lista se encontre em ordem crescente.
*/

void bubble_sort(int *array, int size) {

    int temp;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) { 
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main() {

    int arr[15];
    srand(time(NULL));

    fill_array(arr, 15);

    printf("\nBefore Bubble Sorting:\n");
    print_array(arr, 15);

    bubble_sort(arr, 15);

    printf("\nAfter Bubble Sorting:\n");
    print_array(arr, 15);

    return 0;
}