#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Write Solution code below
struct Score
{
    int rollno, marks;
};

float avg(struct Score* scores, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += scores[i].marks;
    }
    return (sum/size);
}

void findGreaterThanAverage(struct Score* scores, int n)
{
    int a = avg(scores, n);
    for (int i = 0; i < n; i++)
    {
        if ((float)scores[i].marks > a)
        {
            printf("%d\n", scores[i].rollno);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Score* scores = (struct Score*)malloc(n*sizeof(struct Score));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i].rollno);
        scanf("%d", &scores[i].marks);
    }
    findGreaterThanAverage(scores, n);
    return 0;
}