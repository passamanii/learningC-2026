#include <stdio.h>
#include <math.h>


float tempo_aceleracao(float max, float acel);
float distancia_aceleracao(float max, float acel);
float tempo_percurso(float max, float dist);

 
float tempo_aceleracao(float max, float acel) {

    float time = (max/acel);

    return time;
}

float distancia_aceleracao(float max, float acel) {

    float sqrd_max = pow(max, 2);
    float distance = (sqrd_max/(2*acel));

    return distance;
}

float tempo_percurso(float max, float dist) {

    float time = (dist/max);

    return time;
}


int main() {

    float distance, max_speed, aceleration, max_speed_ms;

    printf("Informe a distancia entre os semaforos: ");
    scanf("%f", &distance);
    
    printf("Informe a velocidade maxima da via: ");
    scanf("%f", &max_speed);

    max_speed_ms = (max_speed/3.6);

    printf("Informe a aceleracao do carro: ");
    scanf("%f", &aceleration);

    float aceleration_time = tempo_aceleracao(max_speed_ms, aceleration);
    float aceleration_distance = distancia_aceleracao(max_speed_ms, aceleration);
    float real_distance = (distance-aceleration_distance);
    float course_time = tempo_percurso(max_speed_ms, real_distance);
    float total_time = (aceleration_time+course_time);
    
    printf("O segundo sinal deve abrir %.2f segundos apos a abertura do primeiro sinal.", total_time-3);

    return 0;
}