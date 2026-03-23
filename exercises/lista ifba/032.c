#include <stdio.h>


int upper_case(char input) {

    if (input >= 97 && input <= 122) {
        input -= 32;
    }

    return input;
}

int identify_type(char input) {

    char vogals[] = {'A', 'E', 'I', 'O', 'U'};
    char consonants[] = {'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z'};
    
    for (int i=0; i<5; i++) {
        if (input == vogals[i]) {
            return 0; //Vogal --> 0
        }
    }

    for (int i=0; i<21; i++) {
        if (input == consonants[i]) {
            return 1; //Consoante --> 1
        }
    }

    if (input <= 57 && input >= 48) {
        return 2; //Número --> 2
    } else if ((input <= 47 && input >= 32) || (input <= 64 && input >= 58) || (input <= 96 && input >= 91) || (input <= 126 && input >= 123)) {
        return 3; //Simbolo --> 3
    }

    return 10;
}

int main() {

    while (1) {
        char input;
        int tipo;

        printf("INFORM THE CHARACTER: ");
        scanf(" %c", &input);

        input = upper_case(input);

        if (input == 'C') {
            printf("CLOSING PROGRAM.");
            break;
        }

        tipo = identify_type(input);

        if (tipo == 0) {
            printf("THE CHARACTER '%c' IS A VOWEL!\n\n", input);
        } else if (tipo == 1) {
            printf("THE CHARACTER '%c' IS A CONSONANT!\n\n", input);
        } else if (tipo == 2) {
            printf("THE CHARACTER '%c' IS A NUMBER!\n\n", input);
        } else if (tipo == 3) {
            printf("THE CHARACTER '%c' IS A SYMBOL!\n\n", input);
        } else {
            printf("ERROR.");
        }
    }

    return 0;
}