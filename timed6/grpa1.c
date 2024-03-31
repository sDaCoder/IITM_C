#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char* repeat_string(char* str, int n)
{
    int size = strlen(str)*n;
    char* req = (char*)malloc(size*sizeof(int));

    int index = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < strlen(str); i++)
        {
            req[index] = str[i];
            index++;
        }
        
    }
    
    return req;
}

int main()
{
    char str[10];
    int n;
    scanf("%s", str);
    scanf("%d", &n);
    char *repeated_string = repeat_string(str, n);
    printf("%s", repeated_string);
    free(repeated_string);
}
