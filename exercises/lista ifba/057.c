/*
1º Definir a fórmula de An;
2º Solicitar o valor de N na main;
3º Passar N como parâmetro para uma função que vai efetuar o somatório;
4º A função em questão irá iterar sobre cada valor de N, partindo de i=1 até i=N;
5º Em cada iteração, a função pegará o valor da parcela e somará ao total, sendo retornado à main no término da estrutura de repetição;
6º Tratar o retorno na main.
*/

#include <stdio.h>
#include <math.h>


float make_summation(int n) {

    float sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += (1/(pow(i, i)));
    }

    return sum;
}

int main() {

    float soma;
    int n;

    printf("Insert the amount of installments for the sum: ");
    scanf("%d", &n);

    soma = make_summation(n);

    printf("The summation of the first %d terms of the determined sequence is: %.5f", n, soma);

    return 0;
}