/*
NAME: BAZARIN NGIGI WANYORO
REGESTRATION NUMBER:CT101/G/29270/25
PROGRAM DESCRIPTION:PROMPT USER TO ENTER 10 INTERGERS AND STORES IN INPUT.TXT
*/

#include <stdio.h>
#include <stdlib.h>

void writeIntegersToFile() {
    FILE *file = fopen("input.txt", "w");
    if (file == NULL) {
        perror("Error opening input.txt for writing");
        return;
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }

    fclose(file);
    printf("Integers written to input.txt\n");
}
