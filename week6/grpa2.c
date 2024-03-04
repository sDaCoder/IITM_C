#include<stdio.h>
//Write function below
int* find_max(int* a, int* b, int* c, int* d, int* e) 
{
    int *max = a;
    
    if (*b > *max) max = b;
    if (*c > *max) max = c;
    if (*d > *max) max = d;
    if (*e > *max) max = e;

    return max;
}

int* find_min(int* a, int* b, int* c, int* d, int* e) 
{
    int *min = a;
    
    if (*b < *min) min = b;
    if (*c < *min) min = c;
    if (*d < *min) min = d;
    if (*e < *min) min = e;

    return min;
}

void min_max_swap(int* a, int* b, int* c, int* d, int* e) 
{
    int *max = find_max(a, b, c, d, e);
    int *min = find_min(a, b, c, d, e);
    int temp;

    temp = *max;
    *max = *min;
    *min = temp;
}


int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    min_max_swap(&a,&b,&c,&d,&e);
    printf("%d %d %d %d %d",a,b,c,d,e);
}