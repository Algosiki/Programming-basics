#include <stdio.h>
#include "ops.h"

int main() {
    Rectangle rect;

    // ���� ��������� ����� �������������� � �������
    printf("%s", "���������� ������ �����: ");
    scanf_s("%d %d", &rect.x1, &rect.y1);
    printf("%s", "���������� ������ �����: ");
    scanf_s("%d %d", &rect.x2, &rect.y2);
    printf("%s", "���������� ������� �����: ");
    scanf_s("%d %d", &rect.x3, &rect.y3);
    printf("%s", "���������� ��������� �����: ");
    scanf_s("%d %d", &rect.x4, &rect.y4);
    
    // ������ ������� � ��������� ��������������
    int area = calculateArea(rect);
    int perimeter = calculatePerimeter(rect);

    // ����� �����������
    printf("������� ��������������: %d\n", area);
    printf("�������� ��������������: %d\n", perimeter);

    return 0;
}