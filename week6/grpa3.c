#include<stdio.h>
//Write function below
void swap(int*a, int*b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

void second_largest(int* a, int* b, int* c, int* d, int* e, int* res) 
{
    int arr[] = {*a, *b, *c, *d, *e};
    int size = sizeof(arr)/sizeof(int);

    int index;
    for (int i = 0; i < size; i++)
    {
        index = i;
        for (int j = i+1; j < size; j++)
        {
            if (arr[index] > arr[j])
            {
                index = j;
            }
        }
        swap(&(arr[index]), &(arr[i]));
    }
    *res = arr[size - 2];
}

int main()
{
    int a,b,c,d,e,res;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    second_largest(&a,&b,&c,&d,&e,&res);
    printf("%d",res);
}