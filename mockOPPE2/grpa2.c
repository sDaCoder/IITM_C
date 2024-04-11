#include <stdio.h>
#include <string.h>
int check_username(char *username)
{
    // Write code here
    if (strlen(username)>=8 && strlen(username)<=20)
    {
        if (username[0]!='_' && username[strlen(username)-1]!='_')
        {
            return 1;
        }
        else return 0;
    }
    return 0;
}
int main()
{
    char username[100];
    scanf("%s", username);
    if (check_username(username))
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}