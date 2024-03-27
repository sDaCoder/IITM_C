#include <stdio.h>
#include <math.h>
#include <stdlib.h>
typedef struct Point
{
    int x;
    int y;
    struct Point *next;
} Point;
typedef struct
{
    Point *points;
} PolyLine;
// template Code
void add_point(PolyLine *line, int x, int y)
{
    // Write solution code
    Point* s = (Point*)malloc(sizeof(Point));
    if (s == NULL)
    {
        exit(1);
    }
    
    s->x = x;
    s->y = y;
    s->next = NULL;

    if(line->points == NULL) {
        line->points = s;
    } else {
        Point* c = line->points;
        while (c->next != NULL)
        {
            c = c->next;
        }
        c->next = s;
    }
    
}

int manhattan_distance(PolyLine *line)
{
    // Write solution code
    int dist = 0;
    Point* c = line->points;
    while ((c != NULL) && (c->next != NULL))
    {
        dist = dist + abs((c->next)->x - c->x) + abs((c->next)->y - c->y);
        c = c->next;
    }
    return dist;
}

void print_line(PolyLine *p)
{
    Point *current = p->points;
    while (current != NULL)
    {
        printf("(%d,%d)->", current->x, current->y);
        current = current->next;
    }
    printf("END\n");
}

int main()
{
    int x, y;
    int read_next;
    PolyLine line = {NULL};
    while (scanf("%d", &read_next) && read_next)
    {
        scanf("%d %d", &x, &y);
        add_point(&line, x, y);
    }
    print_line(&line);
    printf("%d\n", manhattan_distance(&line));

    return 0;
}