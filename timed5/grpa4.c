#include <stdio.h>
enum Month
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};
// Write solution code below

int daysInMonth(int year, enum Month month)
{
    if (month == September || month == April || month == June || month == November)
    {
        return 30;
    }
    else if (month == February)
    {
        if ((year%4 == 0 && year%100 != 0) || (year%400 == 0))
        {
            return 29;
        }
        else return 28;
    }
    else return 31;
}

int main()
{
    int year;
    enum Month month;
    scanf("%d %u", &year, &month);
    printf("%d\n", daysInMonth(year, month));
    return 0;
}