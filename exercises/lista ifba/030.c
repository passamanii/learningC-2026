#include <stdio.h>


float compute_fuel_price(int l, int type) {

    float gas_price = 2.7, alc_price = 1.9, total;
    
    if (type == 'G') {
        total = (gas_price*l);

        if (l <= 25) {
            total -= (0.02*gas_price*l);
        } else {
            total -= (0.04*gas_price*l);
        }
    }
    if (type == 'A') {
        total = (alc_price*l);

        if (l <= 25) {
            total -= (0.03*alc_price*l);
        } else {
            total -= (0.05*alc_price*l);
        }
    }

    return total;
}

char upper_case(char input) {

    if (input >= 97 && input <= 122) {
        input -= 32;
    }

    return input;
}

int main() {

    float total_a_pagar, litros;
    char tipo;

    printf("INFORM THE QUANTITY AND THE SELECTED TYPE OF FUEL (A - ALCOHOL | G - GASOLINE): ");
    scanf("%f %c", &litros, &tipo);
    tipo = upper_case(tipo);

    total_a_pagar = compute_fuel_price(litros, tipo);
    printf("THE TOTAL COST OF YOUR REFUELING IS R$%.2f", total_a_pagar);

    return 0;
}