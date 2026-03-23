#include <stdio.h>


float evaluate_quarterback(int ap, int dp, int yards, int tdp, int ip) {

    float w, x, y, z, rating; 

    w = (((ap/dp)-0.3)/0.2);
    
    if (w > 2.375) {
        w = 2.375;
    } else if (w < 0) {
        w = 0;
    }

    x = (((yards/ap)-3)/4);

    if (x > 2.375) {
        x = 2.375;
    } else if (x < 0) {
        x = 0;
    }

    y = ((tdp/ap)/0.05);

    if (y > 2.375) {
        y = 2.375;
    } else if (y < 0) {
        y = 0;
    }

    z = (((ip/ap)-0.095)/0.04);

    if (z > 2.375) {
        z = 2.375;
    } else if (z < 0) {
        z = 0;
    }

    rating = (((w+x+y+z)*100)/6);

    return rating;
}

int main() {

    int attempted_passes, done_passes, yards, touchdown_passes, intercepted_passes;
    float QB;

    printf("TYPE THE AMOUNT OF PASSES ATEMPTED: ");
    scanf("%d", &attempted_passes);

    printf("TYPE THE AMOUNT OF SUCESSFULL PASSES: ");
    scanf("%d", &done_passes);

    printf("TYPE THE AMOUNT OF YARDS PASSED: ");
    scanf("%d", &yards);

    printf("TYPE THE AMOUNT OF TOUCHDOWN PASSES: ");
    scanf("%d", &touchdown_passes);

    printf("TYPE THE AMOUNT OF INTERCEPTED PASSES: ");
    scanf("%d", &intercepted_passes);

    QB = evaluate_quarterback(attempted_passes, done_passes, yards, touchdown_passes, intercepted_passes);
    printf("THE QUARTERBACK RATING OF THIS PLAYER IS: %.2f", QB);

    return 0;
}