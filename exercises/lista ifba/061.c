#include <stdio.h>


int main() {

    int arr[20] = {0};

    for (int i = 0; i < 20; i++) {
        printf("%02dth Value: %d | Index: %d.\n", i+1, arr[i], i);
    }

    return 0;
}