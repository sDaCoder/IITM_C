#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[21];
    int bounty;
} Pirate;
void read_pirate(Pirate *p)
{
    // Read members of Pirate
    scanf("%s", p->name);
    scanf("%d", &(p->bounty));
}

void print_pirate(Pirate p)
{
    // Prints members of Pirate
    printf("%s ", p.name);
    printf("%d\n", p.bounty);
}

void print_pirate_ptr(Pirate *p)
{
    // Prints members of Pirate
    printf("%s ", p->name);
    printf("%d\n", p->bounty);
}

int compare_pirate_ptr(Pirate *p1, Pirate *p2)
{
    // Compare the p1 and p2 data according to the problem
    if (p1->bounty > p2->bounty)
    {
        return 1;
    }
    else if (p1->bounty == p2->bounty)
    {
        return 0;
    }
    else return -1;
}
int main()
{
    Pirate pirate1, pirate2;
    read_pirate(&pirate1);
    read_pirate(&pirate2);

    int comparison = compare_pirate_ptr(&pirate1, &pirate2);

    if (comparison == 0)
    {
        print_pirate(pirate1);
        print_pirate_ptr(&pirate2);
    }
    else if (comparison == 1)
    {
        print_pirate(pirate1);
    }
    else
    {
        print_pirate_ptr(&pirate2);
    }

    return 0;
}