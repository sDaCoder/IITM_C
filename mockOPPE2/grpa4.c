#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

void copy_odd_lines(char *input_file, char *output_file)
{
    // Complete this function
    FILE* ptr1 = fopen(input_file, "r");
    FILE* ptr2 = fopen(output_file, "w");
    int line = 1;
    char c = fgetc(ptr1);
    while (c != EOF)
    {
        if (line%2 == 0)
        {
            c = fgetc(ptr1);   
            if (c == '\n')
            {
                line++;
            }
        }
        else
        {
            fputc(c, ptr2);
            c = fgetc(ptr1);   
            if (c == '\n')
            {
                line++;
            }   
        }
    }
    
    fclose(ptr1);
    fclose(ptr2);
}

void main()
{
    system("cls");
    char* input_file = "input.txt";
    char* output_file = "output.txt";
    FILE* ptr = fopen(input_file, "w");
    char* str = "Iron Man\nCaptain America\nBlack Widow\nThor\nHulk";

    int i = 0;
    while (str[i] != '\0')
    {
        fputc(str[i], ptr);
        i++;    
    }
    fclose(ptr);

    copy_odd_lines(input_file, output_file);


    FILE* ptr2 = fopen(output_file, "r");
    char c = fgetc(ptr2);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr2);
    }
    fclose(ptr2);
    
}