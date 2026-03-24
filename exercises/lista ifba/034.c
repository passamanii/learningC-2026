#include <stdio.h>


void evaluate_maximum_loan(float r, float l, float p, float* results) {

    float max_l = (10*r), max_pr = (0.3*r), pr = (float)(l/p);
    results[0] = pr; //  PREÇO DE CADA PARCELA
    results[1] = max_pr; // PREÇO MÁXIMO DE CADA PARCELA
    results[2] = max_l; // PREÇO MÁXIMO DO EMPRÉSTIMO
}

void request_info(float* renda, float* emprestimo, int* parcelas) {

    printf("INFORM YOUR MONTHLY REVENUE: ");
    scanf("%f", renda);    

    printf("INFORM THE DESIRED LOAN: ");
    scanf("%f", emprestimo);

    printf("INFORM THE DESIRED AMOUNT OF INSTALLMENTS: ");
    scanf("%d", parcelas);
}

int main() {
    
    float renda, emprestimo;
    int parcelas;

    float array[3]; // CUSTO PARCELA[0] | CUSTO MÁXIMO PARCELA[1] | EMPRÉSTIMO MÁXIMO[2]

    request_info(&renda, &emprestimo, &parcelas);
    
    evaluate_maximum_loan(renda, emprestimo, parcelas, array);

    if (emprestimo > array[2]) {
        printf("YOUR REQUEST IS DENIED. THE MAX LOAN YOU CAN GET IS %.2f.", array[2]);
    } else if (array[0] > array[1]) {
        printf("YOUR REQUEST IS DENIED. THE MAX INSTALLMENT COST YOU CAN GET IS %.2f.", array[1]);
    } else {
        printf("YOUR REQUEST IS ACCEPTED. THE INSTALLMENT COST IS %.2f.", array[0]);
    }

    return 0;
}