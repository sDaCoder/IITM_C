#include <stdio.h>

int reverse(int n)
{
    int rem, rev = 0, isNegative = 0;
    if (n < 0)
    {
        n = -n;
        isNegative = 1;
    }
    
    do
    {
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    } while (n > 0);

    if (isNegative)
    {
        return (-rev);
    }
    
    else
    {
        return rev;
    }
    

}

void main(){
    int n;
    scanf("%d", &n);

    if (n == reverse(n))
    {
        printf("%d is a palindrome number", n);
    }
    else
    {
        printf("%d is not a palindrome number", n);
        
    }
    
}