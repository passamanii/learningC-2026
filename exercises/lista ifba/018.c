#include <stdio.h>


int main() {

    int var_a, var_b, temp_var;

    printf("Informe o valor da primeira variavel: ");
    scanf("%d", &var_a);

    printf("Informe o valor da segunda variavel: ");
    scanf("%d", &var_b);

    temp_var = var_a;
    var_a = var_b;
    var_b = temp_var;

    printf("As variaveis a: %d e b: %d foram permutadas --> a: %d e b: %d.", var_b, var_a, var_a, var_b);

    return 0;
}