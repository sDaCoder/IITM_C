#include <stdio.h>
//Write function below
int calculateRentalCost(int days, int type)
{
    switch (type)
    {
    case 1:
        return (days*500);
    
    case 2:
        return (days*700);
    
    case 3:
        return (days*1000);
    
    default:
        break;
    }
}

int main() 
{
    int days,type,res;
    scanf("%d",&days);
    scanf("%d",&type);
    res = calculateRentalCost(days,type);
    printf("%d", res);
    return 0;
}