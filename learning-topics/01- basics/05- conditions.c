#include <stdio.h>


void guess_number(int guess) {

    if (guess < 555) {
        printf("Your guess (%d) is too low!\n", guess);
    } else if (guess == 555) {
        printf("Your guess (%d) is correct!\n", guess);
    } else {
        printf("Your guess (%d) is too high!\n", guess);
    }
}

int main() {

    guess_number(345);
    guess_number(5556);
    guess_number(555);

    return 0;
}