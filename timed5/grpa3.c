#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Write Solution code below
struct Person
{
    char name[100];
    int age;
    char city[100];
};

int smallest(struct Person* persons, int n)
{
    int index = 0;
    for (int i = 1; i < n; i++)
    {
        if (persons[index].age > persons[i].age)
        {
            index = i;
        }
    }
    return (persons[index].age);
}

void findYoungestPersons(struct Person* persons, int n)
{
    int young = smallest(persons, n);
    for (int i = 0; i < n; i++)
    {
        if (persons[i].age == young)
        {
            printf("%s: %s\n", persons[i].name, persons[i].city);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Person* persons = (struct Person*)malloc(n*sizeof(struct Person));
    for (int i = 0; i < n; i++)
    {
        scanf("%s", persons[i].name);
        scanf("%d", &persons[i].age);
        scanf("%s", persons[i].city);
    }
    findYoungestPersons(persons, n);
    return 0;
}