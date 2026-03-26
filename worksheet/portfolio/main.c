
#include <stdio.h>
#include <stdbool.h>

#include "shapes.h"

int main( void ) {

    //lineLength
    Point p1 = makePoint(1.0, 1.0);
    Point p2 = makePoint(2.0, 1.0);
    Line l1 = makeLine(p1, p2);
    printf("Line length is: %f (Expected: 1.0)\n", lineLength(l1));

    //Area
    Point a = makePoint(0.0, 0.0);
    Point b = makePoint(1.0, 0.0);
    Point c = makePoint(0.0, 1.0);
    Triangle t1 = makeTriangle(a, b, c);
    printf("2. Triangle area: %f (Expected: 0.5)\n", triangleArea(t1));
    
    return 0;
}