#include <stdio.h>
#include "var6.h"

int main() {
    Triangle triangle;

    printf("enter 1st coord ");
    scanf("%d %d", &triangle.x1, &triangle.y1);
    printf("enter 2nd coord ");
    scanf("%d %d", &triangle.x2, &triangle.y2);
    printf("enter 3rd coord ");
    scanf("%d %d", &triangle.x3, &triangle.y3);

    double area = calculateTriangleArea(triangle);
    double perimeter = calculateTrianglePerimeter(triangle);

    printf("Triangle area=%f\n", area);
    printf("Triangle perimetr=%f\n", perimeter);

    return 0;
}