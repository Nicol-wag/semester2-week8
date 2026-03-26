
#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    new.x = x;
    new.y = y;
    return new;
}

Line makeLine( Point p1, Point p2) {
    Line new;
    new.p[0] = p1;
    new.p[1] = p2;
    return new;
}

Triangle makeTriangle( Point p1, Point p2, Point p3 ) {
    Triangle new;
    new.p[0] = p1;
    new.p[1] = p2;
    new.p[2] = p3;
    return new;
}

float lineLength( Line l ) {
    float dx = l.p[1].x - l.p[0].x;
    float dy = l.p[1].y - l.p[0].y;
    return sqrt(dx * dx + dy * dy);
}

float triangleArea( Triangle t ) {
    Line edge1 = makeLine(t.p[0], t.p[1]);
    float a = lineLength(edge1);
    
    Line edge2 = makeLine(t.p[1], t.p[2]);
    float b = lineLength(edge2);

    Line edge3 = makeLine(t.p[0], t.p[2]);
    float c = lineLength(edge3);

    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


bool samePoint( Point p1, Point p2 ) {
    Line l = makeLine(p1, p2);
    float distance = lineLength(l);
    if (distance < 1.0e-6) {
        return true;
    } else {
        return false;
    }
}

bool pointInLine( Point p, Line l) {
    if (samePoint(p, l.p[0]) || samePoint(p, l.p[1])) {
        return true;
    } else {
        return false;
    }
}

bool pointInTriangle( Point p, Triangle t ) {
    if (samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2])) {
        return true;
    } else {
        return false;
    }
}
// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()
