#include <stdio.h>

int sumEven(int a, int b, int k)
{
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if ((i%2 == 0) && (i%k == 0))
        {
            sum += i;
        }
    }
    return sum;
}

int main(){
    int a, b, k;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &k);
    printf("%d", sumEven(a, b, k));
    return 0;
}