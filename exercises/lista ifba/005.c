#include <stdio.h>


int define_sucessor(int num) {

    int sucessor = (num+1);
    return sucessor;
}

int main() {
    
    int num;
    printf("Informe o numero desejado: ");
    scanf("%d", &num);

    int sucessor = define_sucessor(num);
    printf("O sucessor de %d e: %d", num, sucessor);
}