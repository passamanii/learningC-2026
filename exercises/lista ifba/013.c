#include <stdio.h>


float calcula_resistencia_equivalente(float r1, float r2, float r3) {

    float req, r1r2;

    r1r2 = ((r1*r2)/(r1+r2));
    req = (r1r2+r3);

    return req;
}

int main() {

    float r1, r2, r3, r_eq;

    printf("Informe as resistencias R1, R2 e R3 do circuito(X X X): ");
    scanf("%f %f %f", &r1, &r2, &r3);

    r_eq = calcula_resistencia_equivalente(r1, r2, r3);
    printf("The equivalent resistance of the circuit is %.2fOHMS.\n", r_eq);

    return 0;
}