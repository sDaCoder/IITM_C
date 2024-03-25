#include <stdio.h>
#include <stdlib.h>
// Write solution code below

struct Student
{
    int rollNumber, marks;
    char name[100];
};

void createArray(struct Student* arr, int size) 
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &(arr[i].rollNumber));
        scanf("%s", (arr[i].name));
        scanf("%d", &(arr[i].marks));
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Student* arr = (struct Student*)malloc(n*sizeof(struct Student));
    createArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d-%s-%d\n", arr[i].rollNumber, arr[i].name, arr[i].marks);
    }
    return 0;
}