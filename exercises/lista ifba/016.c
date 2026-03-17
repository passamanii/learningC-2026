#include <stdio.h>


int inverte_numeros(int n);
int isola_numero(int n);


int inverte_numeros(int n) {

    int centena, dezena, unidade, numero_invertido;

    centena = ((n%10)*100);
    dezena = (isola_numero(n%100)*10);
    unidade = (n/100);

    numero_invertido = (centena+dezena+unidade);

    return numero_invertido;
}

int isola_numero(int n) {

    while (1) {

        if (n/10 == 0) {
            break;
        }
        n /= 10;
    }   

    return n;
}

int main() {

    int num, inv_num; 

    printf("Informe o numero de 3 algarismos desejado: ");
    scanf("%d", &num);

    inv_num = inverte_numeros(num);
    printf("O numero %d invertido e equivalente a: %d", num, inv_num);

    return 0;
}