#include <stdio.h>


float calcula_nota_semestre(float n1, float n2, float n3, float n4) {

    float n_b1, n_b2, n_s;
    
    n_b1 = (n1+n2);
    n_b2 = (n3+n4);
    n_s = ((n_b1+n_b2)/2.0);

    return n_s;
}

int main() {

    float n1, n2, n3, n4;

    printf("Informe as notas do 1 bimestre(X X): ");
    scanf("%f %f", &n1, &n2);
    printf("Informe as notas do 2 bimestre(X X): ");
    scanf("%f %f", &n3, &n4);

    float n_semestral = calcula_nota_semestre(n1, n2, n3, n4);
    printf("A nota semestral do aluno foi %.2f.", n_semestral);

    return 0;
}