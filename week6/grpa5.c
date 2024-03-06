#include <stdio.h>

int main() 
{
    unsigned int a; 
    scanf("%08X", &a);
    //Write code below
    unsigned int q, rem;
    rem = a%(0X10000);
    q = a/(0X10000);
    a = rem*(0X10000) + q;
    
    
    
    printf("%08X\n",a);
    return 0;
}