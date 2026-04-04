#include <stdio.h>


int main() {

    int num;

    printf("Inform a integer number in the interval[02, 12]: ");
    scanf("%d", &num);

    for (int i = 1; i < 7; i++) {
        for (int j = 1; j < 7; j++) {
            if (i + j == num) {
                printf("%d & %d.\n", i, j);
            }
        }
    }

    return 0;
}