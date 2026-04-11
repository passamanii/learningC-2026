#include <stdio.h>
#include <stdlib.h>


int main() {

    int maior, menor, arr[20];

    for (int i = 0; i < 20; i++) {
        arr[i] = rand() %200+1;
        printf("Array Item %d: %d\n", i+1, arr[i]);
    }

    menor = maior = arr[0];
    
    for (int i = 0; i < 20; i++) {
        if (arr[i] > maior) {
            maior = arr[i];
        } else if (arr[i] < menor) {
            menor = arr[i];
        }
    }

    printf("Biggest: %d | Smallest: %d", maior, menor);

    return 0;
}