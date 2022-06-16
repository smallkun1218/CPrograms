#include "stdio.h"

typedef struct Point{
    int x;
    int y;
}Point, *pPoint;

void Display(Point point){
    printf("x is %d\n", point.x);
    printf("y is %d\n", point.y);
}

void SetPoint(pPoint point){
    point->x = 2;
    point->y = 3;
}

int main(){
    Point point;
    SetPoint(&point);
    Display(point);

    return 0;
}