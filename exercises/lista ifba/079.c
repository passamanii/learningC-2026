#include <stdio.h>


void substring_generator(char *origin_array, char *destiny_array, int start, int end) {

    for (int i = 0; i <= end-start; i++) {
        destiny_array[i] = origin_array[i+start];
        i == end-start ? destiny_array[i+1] = '\0' : 0; //Operador ternário [(condição) ? comando verdadeiro : comando falso]
    }
}

int main() {

    char arr[100], sub_arr[99];
    int start_index, end_index;

    printf("Input a string to serve as base for the substring generator: ");
    fgets(arr, 100, stdin);

    printf("Input the interval to create the substring (A B): ");
    scanf("%d %d", &start_index, &end_index);

    substring_generator(arr, sub_arr, start_index, end_index);

    printf("The generated substring [%d-%d] is: '%s'.\n", start_index, end_index, sub_arr);

    return 0;
}