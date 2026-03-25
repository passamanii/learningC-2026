#include <stdio.h>


float pulverisation_measurement(int type, float area) {

    float costs[4] = {50, 100, 150, 250};
    float custo_atual = costs[type-1];
    float total;

    total = (custo_atual*area);

    if (area >= 10) {
        total -= (0.05*total);
    } if (total >= 750) {
        total -= ((total-750)*0.1);
    }
    
    return total;
}

int main() {

    int tipo;
    float total, area;

    printf("INFORM THE TYPE OF PULVERISATION\n"
        "1- ERVAS DANINHAS\n"
        "2- GAFANHOTOS\n"
        "3- BROCA\n"
        "4- TODOS\n"
        "TYPE HERE: ");
    scanf("%d", &tipo);

    printf("INFORM THE AREA TO BE PULVERISED(ACRES): ");
    scanf("%f", &area);

    total = pulverisation_measurement(tipo, area);

    printf("THE TOTAL COST FOR THE PULVERISATION OF %.1f ACRES IS R$%.2f", area, total);

    return 0;
}