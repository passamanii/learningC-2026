#include <stdio.h>
#include <string.h>


int verify_containment(char *array1, char *array2) {

    int size1 = strlen(array1), size2 = strlen(array2);

    for (int f = 0; f < size2; f++) {

        int found = 0;

        for (int i = 0; i < size1; i++) {
            if (array2[f] == array1[i]) {
                found = 1;
                break;
            }
        }

        if (!found) return 0; 
    }
    
    return 1;
}

int main() {

    char arr[100], arr2[100];
    int stt;

    printf("Input the first string to be the base of the comparation: ");
    fgets(arr, 100, stdin);

    printf("Input the second string: ");
    fgets(arr2, 100, stdin);

    stt = verify_containment(arr, arr2);

    if (stt == 1)
        printf("The 2nd string IS contained in the first one.\n");
    else 
        printf("The 2nd string IT IS NOT contained in the first one.\n");

    return 0;
}