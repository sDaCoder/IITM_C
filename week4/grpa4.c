#include <stdio.h>

void main(){
    float p, q;
    scanf("%f %f", &p, &q);

    if (p==0.0)
    {
        if (q==0.0)
        {
            printf("Origin");
        }
        else
        {
            printf("y-axis");
        }
    }
    
    else if (p > 0)
    {
        if (q == 0.0)
        {
            printf("x-axis");
        }
        else if (q > 0)
        {
            printf("First");
        }
        else
        {
            printf("Fourth");
        }
    }

    else
    {
        if (q == 0.0)
        {
            printf("x-axis");
        }
        else if (q > 0)
        {
            printf("Second");
        }
        else
        {
            printf("Third");
        }
    }
    
    
}