#include <stdio.h>

int main() {
    // Variables Initialization
    int x, y;
    
    // Reading Input
    scanf("%d %d", &x, &y);
    
    
    // Logic and print output
    if (x > 0 && y > 0) 
    {
        printf("Quadrant 1");
    } 
    else if(x < 0 && y > 0) 
    {
        printf("Quadrant 2");
    } 
    else if(x < 0 && y < 0) 
    {
        printf("Quadrant 3");
    } 
    else 
    {
        printf("Quadrant 4");
    }

    return 0;
}