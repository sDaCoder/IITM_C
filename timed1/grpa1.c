#include <stdio.h>
#include <math.h>

int expr(int a, int b, int c)
{
    int ct = pow(a, 3) + pow(b, 3) + pow(c, 3);
    int pt = 3*a*b*c;
    int st = 2*(a + b + c);
    return (ct + pt - st);
}

void main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    printf("%d", expr(a, b, c));
}