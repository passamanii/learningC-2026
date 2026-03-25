#include <stdio.h>


int evaluate_situation(int i, int ii, int iii, int iv, int v) {

    float media = 70.0;
    float notas[] = {i, ii, iii, iv, v};
    float situation[] = {0, 0, 0, 0, 0};

    for (int i=0; i<5; i++) {
        if (notas[i] >= media) {
            situation[i] = 1;
        }
    }

    if ((situation[0] == 0) && (situation[1] == 0) & (situation[2] == 0) && (situation[3] == 0) && (situation[4] == 0)) {
        return 9;
    } else if (situation[2] == 0 && situation[4] == 0) {
        return 1;
    } else if (situation[4] == 0) {
        return 2;
    }
    
    return 0;
}

int main() {
    
    float I, II, III, IV, V, situation;

    printf("INFORM THE TESTS GRADE(X X X X X): ");
    scanf("%f %f %f %f %f", &I, &II, &III, &IV, &V);

    situation = evaluate_situation(I, II, III, IV, V);

    if (situation == 0) {
        printf("PASSED ALL EXAMS.");
    } else if (situation == 1) {
        printf("PASSED EXAMS I, II, IV BUT FAILED III AND V.");
    } else if (situation == 2) {
        printf("PASSED EXAMS I, II, III, IV BUT FAILED V.");
    } else {
        printf("FAILED ALL EXAMS.");
    }

    return 0;
}