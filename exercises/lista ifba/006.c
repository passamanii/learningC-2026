#include <stdio.h>


void division(int a, int b, int *quociente, int *resto) {

    *quociente = (a/b);
    *resto = (a%b);
}

int main() {


    int n1, n2, quociente, resto;

    printf("Informe os dois numeros aqui: ");
    scanf ("%d %d", &n1, &n2);

    division(n1, n2, &quociente, &resto);

    printf("QUOCIENTE: %d\n"
        "RESTO: %d", quociente, resto);
    
    return 0;
}