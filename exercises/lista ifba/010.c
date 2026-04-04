#include <stdio.h>


void invert_array(char* array);
int len(char* array);
char* convert_to_binary(int number);


char* convert_to_binary(int number) {

    int i;
    static char binary[10];

    for (i=0; number > 0; i++) {
        binary[i] = (number%2) + '0';
        number /= 2;
    }
    
    binary[i] = '\0';
    invert_array(binary);
    return binary;
}

int len(char* array) {
    
    int i = 0;
    
    while (1) {
        if (array[i] == '\0') {
            break;
        }
        i++;
    }
    return (i);
}

void invert_array(char* array) {

    int i;
    int n = len(array);
    char temp;

    for (i=0; i < (n/2); i++) {
        temp = array[i];
        array[i] = array[n-1-i];
        array[n-1-i] = temp;
    } 
}

int main() {

    int num;
    char* bin;

    printf("Informe o numero desejado(<32): ");
    scanf("%d", &num);

    bin = convert_to_binary(num);
    printf("The number %d in binary is equivalent to %s.", num, bin);

    return 0;
}