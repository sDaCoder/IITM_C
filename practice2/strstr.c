#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int search_word(char* word)
{
    FILE* ptr = fopen("input.txt", "r");
    char c = fgetc(ptr);
    char str[1000];
    for (int i = 0; c != EOF; i++)
    {
        str[i] = c;
        c = fgetc(ptr);
    }
    char* p = str;
    int count = 0;
    while ((p = strstr(p, word)) != NULL)
    {
        count++;
        p = p + strlen(word);
    }
    fclose(ptr);
    return count;
}

void main(){
    system("cls");
    char str[1000] = "Hey, welcome to the world of Programming! Programming deals with many complex problems of the world.";
    FILE* ptr = fopen("input.txt", "w");
    for (int i = 0; str[i]!='\0'; i++)
    {
        putc(str[i], ptr);
    }
    fclose(ptr);
    printf("%d", search_word("Programming"));
}