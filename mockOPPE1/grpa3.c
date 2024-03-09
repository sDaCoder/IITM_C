#include <stdio.h>
#include <math.h>
// Write solution code below

int digits(int n)
{
    int count = 0, num = n;
    while (num != 0)
    {
        num = num/10;
        count++;
    }
    return count;
}

int isArmstrong(int n)
{
    int num = n, sum = 0, rem;
    while (num != 0)
    {
        rem = num%10;
        num = num/10;
        sum = sum + round(pow(rem, digits(n)));
    }
    if (sum == n)
    {
        return 1;
    }
    else return 0;
}

void countArmstrong(int* a, int* b, int* count)
{
    int c = 0;
    for (int i = *a; i <= *b; i++)
    {
        if (isArmstrong(i) == 1)
        {
            c++;
        }
    }
    *count = c;
}

int main() 
{
    int a,b,count;
    scanf("%d %d",&a,&b);
    countArmstrong(&a,&b,&count);
    printf("%d",count);
    return 0;
}