#include <stdio.h>
// Write function below
void swap(int*a, int*b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    swap(&a, &b);

    printf("%d", a);
    printf("\n");
    printf("%d", b);

    return 0;
}