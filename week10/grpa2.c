#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countString()
{
    char word[50];
    fgets(word, 50, stdin);
    FILE* ptr = fopen("notes.txt", "r");
    char str[1000];
    char c = fgetc(ptr);
    int i = 0;
    while (c != EOF)
    {
        str[i] = c;
        i++;
        c = fgetc(ptr);
    }
    
    int count = 0;
    char *p = str;

    while ((p = strstr(p, word)) != NULL) {
        count++;
        p += strlen(word);
    }
    return count;
}

int main()
{
    printf("%d", countString());
    return 0;
}