#include <stdio.h>
#include <string.h>


char* que_dia_e(int day) {

    char* days[] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};

    for (int i=1; i<8; i++) {
        if (day == i) {
            return days[i-1];
        }
    }

    return "null";
}

int main() {

    int dia;
    char* dia_nome;

    printf("TYPE THE NUMBER OF A DAY OF THE WEEK: ");
    scanf("%d", &dia);

    dia_nome = que_dia_e(dia);

    if (strcmp(dia_nome,"null") == 0) {
        printf("ERROR. THE INFORMED NUMBER DO NOT REPRESENT A DAY OF THE WEEK.");
        return 0;
    }


    printf("THE INFORMED DAY IS %s!", dia_nome);

    return 0;
}