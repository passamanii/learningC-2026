#include <stdio.h>
#include <string.h>


int len(char *array) {

    int size = 0, i = 0;

    while (array[i] != '\0') {
        i++;
        size++;
    }

    return size-1; //-1 serve para desconsiderar o caracter nulo (\0).
}

int ocurrency_evaluator(char *array, char character) {

    int sum = 0;

    for (int i = 0; i < len(array); i++) {
        if (array[i] == character) {
            sum += 1;
        }
    }

    return sum;
}

int main() {

    char arr[100], character;
    int amount;

    printf("Input a character to be searched: ");
    scanf(" %c", &character);

    while (getchar() != '\n'); //Loopa getchar() para limpar o buffer (tirar caracteres restantes indesejados para seguir para o próximo input).

    printf("Input a string to serve as material for the search: ");
    fgets(arr, 100, stdin);
    
    amount = ocurrency_evaluator(arr, character);

    switch (amount) {

        case 1:
            printf("The character '%c' appears 1 time in the inputed string.\n", character);
            break;
        default:
            printf("The character '%c' appears %d times in the inputed string.\n", character, amount);
    }

    return 0;
}