#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct {

    float most_rain;
    float least_rain;
    int most_rain_day;
    int least_rain_day;
    float media1;
    float media2;

} Resultado;

Resultado process_pluviometer_index(float *array) {

    Resultado r;

    r.least_rain = array[0];
    r.most_rain = array[0];
    r.least_rain_day = 1;
    r.most_rain_day = 1;
    r.media1 = r.media2 = 0;

    for (int i = 0; i < 30; i++) {
        if (array[i] > r.most_rain) {
            r.most_rain = array[i];
            r.most_rain_day = i+1;
        } else if (array[i] < r.least_rain) {
            r.least_rain = array[i];
            r.least_rain_day = i+1;
        }
        
        if (i < 15) {
            r.media1 += array[i];
        } else {
            r.media2 += array[i];
        }
    }

    r.media1 /= 15.0;
    r.media2 /= 15.0;

    return r;
}

char* get_suffix(int days) {

    switch (days) {

        case 1:
            return "st";
        case 2:
            return "nd";
        case 3:
            return "rd";
        default:
            return "th";
    }
}

int main() {

    float arr[30];
    srand(time(NULL));

    Resultado res;

    for (int i = 0; i < 30; i++) {
        arr[i] = (((float) rand() / RAND_MAX) * 10); // rand() / RAND_MAX --> Essa expressão sempre retorna um valor entre 0 e 1.
    }

    res = process_pluviometer_index(arr);

    char *suffix1 = get_suffix(res.most_rain_day);
    char *suffix2 = get_suffix(res.least_rain_day);
    
    printf("\n=====PRECIPITATION REPORT=====\n");
    printf("The %02d%s day had the most precipitation rate of the month with %.2fmm of rain\n", res.most_rain_day, suffix1, res.most_rain);
    printf("The %02d%s day had the least precipitation rate of the month with %.2fmm of rain\n", res.least_rain_day, suffix2, res.least_rain);
    printf("The medium rainfall of the first fortnight was %.2fmm\n", res.media1);
    printf("The medium rainfall of the second fortnight was %.2fmm\n", res.media2);
    printf("===============================\n");

    return 0;
}