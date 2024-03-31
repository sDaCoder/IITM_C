#include<stdio.h>

void readFile() {
    FILE *fp = fopen("output.txt", "r");
    if (fp == NULL) {
        return;
    }

    int num;
    while (fscanf(fp, "%d", &num) != EOF) {
        printf("%d\n", num);
    }

    fclose(fp);
}
