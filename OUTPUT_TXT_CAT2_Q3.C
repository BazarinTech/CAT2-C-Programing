/*
NAME: BAZARIN NGIGI WANYORO
REGESTRATION NUMBER:CT101/G/29270/25
PROGRAM DESCRIPTION:CALCULATE SUM AND AVERAGE OF NUMBERS AND STORE IN OUTPUT.TXT
*/

void calculateSumAndAverage() {
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt for reading");
        return;
    }

    int num, sum = 0, count = 0;
    float average;

    while (fscanf(inputFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(inputFile);

    if (count > 0) {
        average = (float)sum / count;

        FILE *outputFile = fopen("output.txt", "w");
        if (outputFile == NULL) {
            perror("Error opening output.txt for writing");
            return;
        }

        fprintf(outputFile, "Sum: %d\n", sum);
        fprintf(outputFile, "Average: %.2f\n", average);

        fclose(outputFile);
        printf("Sum and average written to output.txt\n");
    } else {
        printf("No integers found in input.txt\n");
    }
}
