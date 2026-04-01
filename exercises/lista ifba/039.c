#include <stdio.h>


int verfiy_digit(int n);
int calcula_numero_agencia(int m, int c, int d, int u);


int verify_digit(int n) {

    int m, c, d, u;

    m = (n/1000);
    c = ((n/100)-(m*10));
    d = ((n/10)-(m*100)-(c*10));
    u = (n-(m*1000)-(c*100)-(d*10));

    int agency_num = calcula_numero_agencia(m, c, d, u);

    return agency_num;
}

int calcula_numero_agencia(int m, int c, int d, int u) {

    int dv = ((((m*5)+(c*4)+(d*3)+(u*2))%11)-11);
    
    if (dv < 0) {
        dv = -dv;
    }

    return dv;
}

int main() {

    int num, dv;

    printf("Inform the agency number: ");
    scanf("%d", &num);

    dv = verify_digit(num);

    printf("The complete agency number is: %d-%d.", num, dv);

    return 0;
}