#include <stdio.h>


int main() {

    int years; 

    typedef struct {

        int habitantes; 
        float taxa_crescimento;

    } cidade;

    cidade A;
    A.habitantes = 5000000;
    A.taxa_crescimento = 0.03;

    cidade B;
    B.habitantes = 7000000;
    B.taxa_crescimento = 0.02;

    for (int i = 0; B.habitantes > A.habitantes; i++) {
        B.habitantes += (B.habitantes * B.taxa_crescimento);
        A.habitantes += (A.habitantes * A.taxa_crescimento);
        years = i;
    }

    printf("It would take %d years for City A to overcome City B in population.", years);

    return 0;
}