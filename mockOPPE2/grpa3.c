#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[20];
    int height;
} Student;

typedef struct
{
    Student *students[50];
    int len;
} Line;

void insert_student(Line *line)
{
    // Write code here
    Student* new_stu = (Student*)malloc(sizeof(Student));
    scanf("%s %d", new_stu->name, &(new_stu->height));

    //! Sorting Algorithm
    int i = line->len - 1;
    while (i >= 0 && line->students[i]->height >= new_stu->height)
    {
        line->students[i + 1] = line->students[i];
        i--;
    }
    
    //! Appending new Element
    line->students[i+1] = new_stu;
    (line->len)++;
}

int main()
{
    char username[100];
    int n;
    Line line;
    line.len = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        insert_student(&line);
    }
    for (int i = 0; i < line.len; i++)
    {
        printf("%s %d\n", line.students[i]->name, line.students[i]->height);
    }
}