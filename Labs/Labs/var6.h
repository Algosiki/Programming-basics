//
// Created by fyodor on 24.11.2023.
//

#ifndef UNTITLED2_VAR6_H
#define UNTITLED2_VAR6_H // filename_headername_H

#ifndef ops_h
#define ops_h

typedef struct {
    int x1, y1;
    int x2, y2;
    int x3, y3;
} Triangle;

#include <math.h>

double calculateTriangleArea(Triangle t) {
    double a = sqrt(pow(t.x2 - t.x1, 2) + pow(t.y2 - t.y1, 2));
    double b = sqrt(pow(t.x3 - t.x2, 2) + pow(t.y3 - t.y2, 2));
    double c = sqrt(pow(t.x1 - t.x3, 2) + pow(t.y1 - t.y3, 2));

    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}


double calculateTrianglePerimeter(Triangle t) {
    double a = sqrt(pow(t.x2 - t.x1, 2) + pow(t.y2 - t.y1, 2));
    double b = sqrt(pow(t.x3 - t.x2, 2) + pow(t.y3 - t.y2, 2));
    double c = sqrt(pow(t.x1 - t.x3, 2) + pow(t.y1 - t.y3, 2));

    return a + b + c;
}


#endif

#endif //UNTITLED2_VAR6_H
