#include <stdio.h>

int main() {

    int grades[][5] = {  
    {80, 70, 65, 89, 90},
    {85, 80, 80, 82, 87}
    };
 
    float average_math = ((grades[0][0]+grades[0][1]+grades[0][2]+grades[0][3]+grades[0][4])/5);
    float average_phy = ((grades[1][0]+grades[1][1]+grades[1][2]+grades[1][3]+grades[1][4])/5);
    
    printf("The average grade in Mathmatics is: %.2f.\n"
        "The average grade in Physics is: %.2f.", average_math, average_phy);

    return 0;
}
