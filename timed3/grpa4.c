#include<stdio.h>
//Write solution code below

void DecimalToBinary(int D, long int* B)
{
    long int sum = 0, rem, base = 1;
    while (D != 0)
    {
        rem = D%2;
        D = D/2;
        sum = sum + rem*base;
        base = base*10;
    }
    *B = sum;
}

int main()
{
    int D;
    long int B; 
    scanf("%d",&D);    
    DecimalToBinary(D, &B);
    printf("%ld", B);
    return 0;
}
