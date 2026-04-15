#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define max_len 100

void fill_array(int *array, int size);
void print_array(int *array, int size);


void fill_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        array[i] = rand() %200+1;
    }
}

void print_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        printf("Array [%d]: %d\n", i+1, array[i]);
    }
}

int main() {

    int size;
    srand(time(NULL)); //Deixa o rand() da stdlib.h com uma seed diferente toda vez que é executado. Sem isso os valores são aleatórios, mas se repetem.
    
    printf("Input the desired amount of terms in the Array: ");
    scanf("%d", &size);
    
    if (size > max_len) {
        printf("The inputed size pass the limit. The maximum value (100) was applied.\n");
        size = max_len;
    }
    
    int default_array[size];

    fill_array(default_array, size);
    print_array(default_array, size);

    return 0;
}