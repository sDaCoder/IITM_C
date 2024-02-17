#include <stdio.h>
int main()
{
    int timeInSeconds, hours, minutes, seconds;
    scanf("%d", &timeInSeconds);
    // Write Solution code below

    hours = timeInSeconds/3600;
    minutes = (timeInSeconds%3600)/60;
    seconds = (timeInSeconds%60);

    printf("%d hours, %d minutes, %d seconds", hours, minutes, seconds);
    return 0;
}