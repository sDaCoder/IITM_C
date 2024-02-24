#include <stdio.h>


void main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a==b && b==c && c==a)
    {
        printf("Equilateral");
    }
    else if (a==b || b==c || c==a)
    {
        printf("Isosceles");
    }
    else
    {
        printf("Scalene");
    }
    
    
}