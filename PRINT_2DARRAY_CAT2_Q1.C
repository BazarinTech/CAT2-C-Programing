/*
NAME: BAZARIN NGIGI WANYORO
REGESTRATION NUMBER:CT101/G/29270/25
PROGRAM DESCRIPTION:PRINTING ELEMENT IN 2D ARRAY
*/

#include <stdio.h>

int main() {
    // Given array
    int scores[2][2] = {
        {65, 92},
        {84, 72}
    };

    int scores2[2][2] = {
        {35, 70},
        {59, 67}
    };

    // Printing the elements of the array
    printf("Elements of the first array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    printf("\nElements of the second array:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("scores2[%d][%d] = %d\n", i, j, scores2[i][j]);
        }
    }

    return 0;
}
