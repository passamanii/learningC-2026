#include <stdio.h>


int verify_vowel(char input, char* vogals);
char convert_to_lower(char input);


int verify_vowel(char input, char* vogals) {

    for (int i=0; i<5; i++) { 
        if (vogals[i] == input) {
            return 1;
        }     
    }

    return 0;
}

char convert_to_lower(char input) {

    if (90 >= input  && input >= 65) {
        return (input + 32);
    }

    return input;
}

int main() {
    
    char input, vogals[] = {'a', 'e', 'i', 'o', 'u'};
    
    printf("WRITE THE DESIRED VOGAL: ");
    scanf("%c", &input);
    
    input = convert_to_lower(input);
    
    if (verify_vowel(input, vogals) == 1) {
        printf("THE WRITTEN CHARACTER (%c) IS A VOWEL.", input);   
    } else {
        printf("THE WRITTEN CHARACTER (%c) IS A CONSONANT.", input);
    }

    return 0;
}