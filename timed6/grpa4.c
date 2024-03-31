#include <stdio.h>
// Write code below
void wordCount(char filename[100])
{
    // Write code below
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