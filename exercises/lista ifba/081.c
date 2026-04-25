#include <stdio.h>
#include <string.h>

void pop(char *array, int index);
void simple_normalize_string(char *array);
void failproof_normalize_string(char *array);


void pop(char *array, int index) {
    
    int size = (strlen(array) - 1);

    for (int i = index; i < size; i++) {
        array[i] = array[i+1];
    }
}

void simple_normalize_string(char *array) { //Minha solução simples para remover espaços. Falha quando existem espaços em sequência.

    int size = (strlen(array) - 1);

    for (int i = 0; i < size; i++) {
        if (array[i] == ' ') {
            pop(array, i);
        } else if (i == size - 1) {
            array[i] = '\0';
        }
    }
}

void failproof_normalize_string(char *array) { //À prova de falhas: mais eficaz, mais simples e melhor. Infelizmente não foi a minha solução.

    int j = 0;
    int size = strlen(array) - 1;

    for (int i = 0; i < size; i++) {
        array[i] != ' ' ? array[j++] = array[i] : 0;
    }

    array[j] = '\0';
}

int main() {

    char arr[100];

    printf("Input the desired string to be normalized: ");
    fgets(arr, 100, stdin);

    printf("Before: %s.\n", arr);

    failproof_normalize_string(arr);

    printf("After: %s.\n", arr);

    return 0;
}