/*
1º Criar uma lista com os números primos dentro do intervalo
2º Verificar os números primos que somados resultam no número x informado
*/

#include <stdio.h>

void get_primes(int *p);
int evaluate_sum(int x, int *p, int *result);
int len(int *p);


void get_primes(int *p) {

    int index = 0;

    for (int i = 1; i < 1000; i++) {
        int div = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                div++;
            }
        }

        if (div == 2) {
            p[index] = i;
            index++;
        }
    }

    p[index] = -1;
}

int evaluate_sum(int x, int *p, int *result) {
    
    for (int i = 0; i < len(p); i++) {
        for (int j = 0; j < len(p); j++) {
            if (p[i] + p[j] == x) {
                result[0] = p[i];
                result[1] = p[j];
                return 1;
            }
        }
    }

    return 0;
}

int len(int *p) {

    int size = 0, i = 0;

    while (p[i] != -1) {
        size++;
        i++;
    };

    return size;
}

int main() {

    int x, ans[2], primes[200];
    int state;

    printf("Input a integer[500, 1000]: ");
    scanf("%d", &x);

    get_primes(primes);
    state = evaluate_sum(x, primes, ans);

    switch (state) {

        case 0:
            printf("There are no prime numbers that their sum results in %d.\n", x);
            break;

        case 1:
            printf("The prime numbers %d and %d have their sums resulting in %d.\n", ans[0], ans[1], x);
            break;
    }

    return 0;
}