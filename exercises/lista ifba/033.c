#include <stdio.h>
#include <string.h>


int identify_quadrant(float x, float y) {

    if (x > 0 && y > 0) {
        return 1; // 1º QUADRANTE
    } else if (x < 0 && y > 0) {
        return 2; // 2º QUADRANTE
    } else if (x < 0 && y < 0) {
        return 3; //3º QUADRANTE
    } else if (x > 0 && y < 0) {
        return 4; // 4º QUADRANTE
    } else if (x == 0 && y != 0) {
        return 5; // SOBRE EIXO X
    } else if (x != 0 && y == 0) {
        return 6; // SOBRE EIXO Y
    } else {
        return 0; // ORIGEM
    }
}

void print_state(float x, float y, int s) {

    char conteudo[15];
    if (s == 0) {
        strcpy(conteudo, "ON THE ORIGIN.");
    } else if (s == 1) {
        strcpy(conteudo, "ON THE FIRST QUADRANT.");
    } else if (s ==2) {
        strcpy(conteudo, "ON THE SECOND QUADRANT.");
    } else if (s == 3) {
        strcpy(conteudo, "ON THE THIRD QUADRANT.");
    } else if (s ==4) {
        strcpy(conteudo, "ON THE FOURTH QUADRANT.");
    } else if (s == 5) {
        strcpy(conteudo, "ON THE X AXIS.");
    } else {
        strcpy(conteudo, "ON THE Y AXIS.");
    }

    printf("THE POINT (%.1f,%.1f) IS %s", x, y, conteudo);
}

int main() {

    float x, y;
    int state;

    printf("INFORM THE POINT COORDENATES(X Y): ");
    scanf("%f %f", &x, &y);

    state = identify_quadrant(x, y);
    print_state(x,y,state);

    return 0;
}