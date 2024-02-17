#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    // Write solution code below
    double area, s;
    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));


    printf("%.2lf", area);
    return 0;
}