#include <stdio.h>
#include <ctype.h>

int count_words(FILE* fp)
{
    int count = 0;
    int ch, prev = '\0';

    if (fp == NULL)
        return 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (!isspace(ch) && (prev == '\0' || isspace(prev)))
        {
            count++;
        } 
        prev = ch;
    }

    return count;
}

void main(){
    char* str = "word\n word word\n word word";
    char* fName = "input.txt";
    FILE* ptr = fopen(fName, "w");
    for (int i = 0; str[i] != '\0'; i++)
    {
        putc(str[i], ptr);
    }
    fclose(ptr);

    FILE* fp = fopen(fName, "r");
    printf("%d", count_words(fp));
    fclose(fp);
}