#include <stdio.h>
#include <string.h>


void invert_string(char *array) {

    char temp;
    int size = strlen(array);

    for (int i = 0; i < size/2; i++) {
        temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }
}

int main() {

    char arr[100];

    printf("Input a text(max 100 charcters): ");
    fgets(arr, 99, stdin);
    arr[strcspn(arr, "\n")] = '\0'; 
    //strcspn(array, caracter) retorna o índice em que o caracter especificado é encontrado. Ao encontrá-lo, defino-o como o fim da string.

    printf("Before: %s\n", arr);
    invert_string(arr);
    printf("After: %s\n", arr);
    
    return 0;
}