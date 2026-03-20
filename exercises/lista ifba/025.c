#include <stdio.h>
#include <string.h>


int count_month_days(int month_number) {

    int days;

    if (month_number == 1) {
        days = 31;
    }
    else if (month_number == 2) {
        days = 28;
    }
    else if (month_number == 3) {
        days = 31;
    }
    else if (month_number == 4) {
        days = 30;
    }
    else if (month_number == 5) {
        days = 31;
    }
    else if (month_number == 6) {
        days = 30;
    }
    else if (month_number == 7) {
        days = 31;
    }
    else if (month_number == 8) {
        days = 31;
    }
    else if (month_number == 9) {
        days = 30;
    }
    else if (month_number == 10) {
        days = 31;
    }
    else if (month_number == 11) {
        days = 30;
    }
    else if (month_number == 12) {
        days = 31;
    }

    return days;
}

char* define_month_name(int month_number) {

    static char name[15];

    if (month_number == 1) {
        strcpy(name, "January");

    }
    else if (month_number == 2) {
        strcpy(name, "February");
    }
    else if (month_number == 3) {
        strcpy(name, "March");
    }
    else if (month_number == 4) {
        strcpy(name, "April");
    }
    else if (month_number == 5) {
        strcpy(name, "May");
    }
    else if (month_number == 6) {
        strcpy(name, "June");
    }
    else if (month_number == 7) {
        strcpy(name, "July");
    }
    else if (month_number == 8) {
        strcpy(name, "August");
    }
    else if (month_number == 9) {
        strcpy(name, "September");
    }
    else if (month_number == 10) {
        strcpy(name, "October");
    }
    else if (month_number == 11) {
        strcpy(name, "November");
    }
    else if (month_number == 12) {
        strcpy(name, "December");
    }

    return name;
}


int main() {

    int month, days;
    char month_name[20];

    printf("Inform the number of the desired month: ");
    scanf("%d", &month);

    days = count_month_days(month);
    strcpy(month_name, define_month_name(month));
    printf("%s has %d days.", month_name, days);

    return 0;
}