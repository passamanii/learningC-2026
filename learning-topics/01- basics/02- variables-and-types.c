#include <stdio.h>


double soma(int a, float b, double c){
    
    double soma = (a+b+c);
    return soma;
}

int main() {

    int a = 3;
    float b = 4.5;
    double c = 5.25;
    float sum = soma(a,b,c); 

    printf("The sum of a, b and c is: %.2f.", sum);
    
    return 0;
}
//d - inteiro
//f - float or double
//s - string
//c - char

//Em C, aparentemente é necessário que main seja a última função declarada, caso contrário dá erro.