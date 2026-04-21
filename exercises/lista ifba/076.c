#include <stdio.h>
#include <string.h>


int is_in(char *array, int size, int character) {

    for (int i = 0; i < size; i++) {
        if (array[i] == character) {
            return 1;
        }
    }

    return 0;
}

int vowels_in(char *array, int size, char *vowels) {

    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += is_in(vowels, 5, array[i]);
    }

    return sum;
}


int main() {

    char arr[100], vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int sum;

    printf("Input a string to start the verification(100 characters max): ");
    fgets(arr, 99, stdin); //Consegue capturar além da primeira palavra. Caso utilizasse scanf e recebesse "Hello World." ele só capturaria "Hello"
    arr[strcspn(arr, "\n")] = '\0';

    sum = vowels_in(arr, strlen(arr), vowels);

    printf("There are %d vogals in the inputed string.\n", sum);

    return 0;
}