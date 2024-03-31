#include <stdio.h>
#include <stdlib.h>
struct Employee
{
    char name[50];
    int salary;
    struct Employee *next;
};

void traverse(struct Employee* ptr){
    while (ptr != NULL)
    {
        printf("%s  ", ptr->name);
        ptr = ptr->next;
    }
}

void employeeList()
{
    // Write code below
    struct Employee* head = NULL;
    int prompt;
    while (1)
    {
        struct Employee* ptr = (struct Employee*)malloc(sizeof(struct Employee));
        scanf("%s %d", ptr->name, &(ptr->salary));
        ptr->next = NULL;

        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            struct Employee* p = head;
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = ptr;
        }
        
        
        scanf("%d", &prompt);
        if (prompt == 0)
        {
            break;
        }
    }

    int max = head->salary;
    struct Employee* p1 = head;
    while (p1 != NULL)
    {
        if (p1->salary > max)
        {
            max = p1->salary;
        }
        p1 = p1->next;
    }
    
    while (head != NULL)
    {
        if (head->salary == max)
        {
            printf("%s\n", head->name);
        }
        head = head->next;
    }
    
            
}

int main()
{
    employeeList();
    return 0;
}