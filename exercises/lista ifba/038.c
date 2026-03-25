#include <stdio.h>


int verify_bissextile(int y) {
    
    int bool=0;

    if ((y%4 == 0) && (y%100 != 0)) {
        bool = 1;
    } else if (y%400 == 0) {
        bool = 1;
    }

    return bool;
}

int main() {

    int bool, ano;

    printf("INFORM THE DESIRED YEAR: ");
    scanf("%d", &ano);

    bool = verify_bissextile(ano);

    if (bool == 1) {
        printf("THE YEAR %d IS BISSEXTILE.", ano);
    } else {
        printf("THE YEAR %d IS --NOT-- BISSEXTILE.", ano);
    }

    return 0;
}