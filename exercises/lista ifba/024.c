#include <stdio.h>


int find_the_biggest(int number1, int number2, int number3) {

    int numbers[3] = {number1, number2, number3};
    int biggest = -999999999;
    int i;
    
    for (i=0; i<4; i++) {
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
    }
    
    return biggest;
}

int main() {

    int n1, n2, n3, biggest;

    printf("Inform three integers numbers in the format(X X X): ");
    scanf("%d %d %d", &n1, &n2, &n3);

    biggest = find_the_biggest(n1, n2, n3);
    printf("The biggest number among %d, %d and %d is %d.", n1, n2, n3, biggest);
}