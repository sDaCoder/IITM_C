#include <stdio.h>
#include <stdlib.h>
//Write solution code below
void writeToFile()
{
    FILE* ptr = fopen("notes.txt", "w");
    char str[50];
    fgets(str, 50, stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        putc(str[i], ptr);
    }
    fclose(ptr);
}

int main() 
{
    char s[20];
    writeToFile();
    FILE *fp = fopen("notes.txt", "r");
    fgets(s, 20, fp);
    printf("%s", s);
    fclose(fp);
    return 0;
}