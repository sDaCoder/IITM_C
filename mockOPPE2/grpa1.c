#include <stdio.h>
#include <string.h>
void swap_name(char *name)
{
    // Hint:- You can use strtok() function
    //  Write code here
    char fname[50], surname[50];
    int i = 0, j = 0;

    // Find the space character
    while (name[i] != ' ') {
        fname[i] = name[i];
        i++;
    }
    fname[i] = '\0'; // Null terminate the name string

    i++; // Skip the space character

    // Copy the rest of the string into surname
    while (name[i] != '\0') {
        surname[j] = name[i];
        i++;
        j++;
    }
    surname[j] = '\0'; // Null terminate the surname string

    sprintf(name, "%s %s", surname, fname);
    
    
}
int main()
{
    char name[100];
    fscanf(stdin, "%[^\n]", name);
    swap_name(name);
    printf("%s", name);
}