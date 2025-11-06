/*
NAME: BAZARIN NGIGI WANYORO
REGESTRATION NUMBER:CT101/G/29270/25
PROGRAM DESCRIPTION:COMBINATION OF INPUT.TXT AND OUTPUT.TXT
*/

void displayFileContents() {
    printf("\nContents of input.txt:\n");
    displayFile("input.txt");

    printf("\nContents of output.txt:\n");
    displayFile("output.txt");
}

void displayFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}
