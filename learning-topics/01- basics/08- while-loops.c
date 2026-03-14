#include <stdio.h>


int main() {

    int i = 0;
    int array[10] = {1, 2, 3, 4, 5, 6, 11, 12, 13, 14};

    while (1) {

        if (array[i] < 5) {
            i++;
            printf("Subestimou a meta amigo.\n");
            continue;
        } else if (array[i] > 10) {
            i++;
            printf("Estrapolou a meta amigo.\n");
            break;
        }

        printf("Number %d.\n", array[i]);
        i++;

    }

    return 0;
}