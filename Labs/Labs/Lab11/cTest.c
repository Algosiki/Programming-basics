#include <stdio.h>
#include "ops.h"

int main() {
    Rectangle rect;

    // Ввод координат точек прямоугольника с консоли
    printf("%s", "Координаты первой точки: ");
    scanf_s("%d %d", &rect.x1, &rect.y1);
    printf("%s", "Координаты второй точки: ");
    scanf_s("%d %d", &rect.x2, &rect.y2);
    printf("%s", "Координаты третьей точки: ");
    scanf_s("%d %d", &rect.x3, &rect.y3);
    printf("%s", "Координаты четвертой точки: ");
    scanf_s("%d %d", &rect.x4, &rect.y4);
    
    // Расчет площади и периметра прямоугольника
    int area = calculateArea(rect);
    int perimeter = calculatePerimeter(rect);

    // Вывод результатов
    printf("Площадь прямоугольника: %d\n", area);
    printf("Периметр прямоугольника: %d\n", perimeter);

    return 0;
}