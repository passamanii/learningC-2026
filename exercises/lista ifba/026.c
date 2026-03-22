#include <stdio.h>


void soma_dois_maiores(int a, int b, int c) {

    int i, soma=0, x=0, y=0;
    int nums[3] = {a, b, c};

    for (i=0; i<3; i++) {
        int e=nums[i];
        if (e >= x) {

            y = x;
            x = e;
        } else if (e > y) {
            y = e;
        }
    }

    soma = (x+y);
    printf("SOMA ENTRE %d E %d: %d", x, y, soma);
}


int main() {

    int a, b, c;

    printf("Informe 3 valores inteiros(X X X): ");
    scanf("%d %d %d", &a, &b, &c);
    
    soma_dois_maiores(a, b, c);

    return 0;
}