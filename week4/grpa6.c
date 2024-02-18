#include <stdio.h>

void main()
{
    double wt;
    int zone;
    scanf("%lf", &wt);
    scanf("%d", &zone);

    if (wt >= 1)
    {
        switch (zone)
        {
        case 1:
            printf("%.2lf", 5*wt);
            break;
 
        case 2:
            printf("%.2lf", 7*wt);
            break;
 
        case 3:
            printf("%.2lf", 10*wt);
            break;
 
        case 4:
            printf("%.2lf", 12*wt);
            break;
 
        case 5:
            printf("%.2lf", 16*wt);
            break;
 
        case 6:
            printf("%.2lf", 17*wt);
            break;
 
        case 7:
            printf("%.2lf", 19*wt);
            break;
 
        default:
            printf("Invalid Input");
            break;
        }
    }
    else
    {
        printf("Invalid Input");
    }
    
}