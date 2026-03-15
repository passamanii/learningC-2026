#include <stdio.h>


float converte_velocidade(float ms) {

    float kh;

    kh = (ms*3.6);

    return kh;
}

int main() {

    float ms_vel, kh_vel;

    printf("Informe a velocidade em m/s: ");
    scanf("%f", &ms_vel);

    kh_vel = converte_velocidade(ms_vel);
    printf("%.2f m/s equivalem a %.2f km/h.", ms_vel, kh_vel);

    return 0;
}