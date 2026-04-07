/* 
1º Pegar dois valores no scanf;
2º Passar os valores pra função, retornando somente um estado lógico;
3º Dentro da função, iterar sobre cada valor e criar uma variável para a soma de todos os divisores de cada um;
4º Comparar se a soma dos divisores de um equivale ao valor do outro.
5º Caso positivo, retornar 1. Caso negativo, retornar 0;
6º Tratar o valor retornado na main.
*/

#include <stdio.h>


int verify_friendship(int x, int y) {

    int x_divs_sum = 0, y_divs_sum = 0;

    for (int i = 1; i <= x/2; i++) {
        if (x%i == 0) {
            x_divs_sum += i;
        }
    }

    for (int i = 1; i <= y/2; i++) {
        if (y%i == 0) {
            y_divs_sum += i;
        }
    }

    if ((x == y_divs_sum) && (y == x_divs_sum)) {
        return 1;
    }

    return 0;
}

int main() {

    int state, x, y;
    
    printf("Inform two integers(X Y): ");
    scanf("%d %d", &x, &y);

    state = verify_friendship(x, y);

    switch (state) {

        case 0:
            printf("The numbers %d and %d ARE NOT friends.", x, y);
            break;
        
        case 1:
            printf("The numbers %d and %d ARE friends.", x, y);
            break;
    }

    return 0;
}