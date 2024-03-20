#include <stdio.h>
// Write solution code below
struct Time{
    int days, hours, minutes, seconds;
};

void Convert(struct Time* time, int sec)
{
    time->days = sec/(24*3600);
    sec = sec%(24*3600);

    time->hours = sec/(3600);
    sec = sec%3600;

    time->minutes = sec/60;
    time->seconds = sec%60;
}

int main()
{
    struct Time time;
    int seconds;
    scanf("%d", &seconds);
    Convert(&time, seconds);
    printf("%d\n", time.days);
    printf("%d\n", time.hours);
    printf("%d\n", time.minutes);
    printf("%d\n", time.seconds);
    return 0;
}