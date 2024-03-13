#include <stdio.h>
#include <string.h>
void print_words(char str[], char delim[])
{
    // Write function definition
    char* token = strtok(str, delim);

    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    
}

int main()
{
    char str[1000];
    char delim[10];
    // Input a str
    fgets(str, 1000, stdin);
    // Input a delimiter
    fgets(delim, 10, stdin);

    print_words(str, delim);
    return 0;
}