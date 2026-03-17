#include <stdio.h>


int main() {

    int n;
    while (1) {
    printf("Informe o numero desejado: ");
    scanf("%d", &n);
    
    if (n > 0) {
        printf("O numero %d e positivo!\n", n);
    } else if (n < 0) {
        printf("O numero %d e negativo!\n", n);
    } else {
        break;
    }
    }

    return 0;
}