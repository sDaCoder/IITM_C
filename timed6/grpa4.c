#include <stdio.h>
// Write code below
void wordCount(char filename[100])
{
    // Write code below
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return;
    }

    char ch;
    int wordCount = 0;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == ' ' || ch == '\n' || ch == '\t') {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            ++wordCount;
        }
    }

    printf("%d\n", wordCount);

    fclose(file);
}

void create(char file[100])
{

    FILE *fp = fopen(file, "w");
    int c;
    while ((c = getchar()) != EOF)
    {
        fputc(c, fp);
    }
    fclose(fp);
}
int main()
{
    char filename[100];
    scanf("%s", filename);
    create(filename);
    wordCount(filename);
    return 0;
}