#ifndef ops_h
#define ops_h

typedef struct {
    int x1, y1; // Координаты первой точки
    int x2, y2; // Координаты второй точки
    int x3, y3;
    int x4, y4;
} Rectangle;

int calculateArea(Rectangle rect) {
    int width = 0, height = 0;
    if (rect.x1 != rect.x2) {
         width = (rect.x2 - rect.x1);
    }
    else {
         width = (rect.x2 - rect.x3);
    }
    if (rect.y1 != rect.y2) {
         height = (rect.y2 - rect.y1);
    }
    else {
         height = (rect.y2 - rect.y3);
    }
    return width * height < 0 ? -width * height : width * height;
}

int calculatePerimeter(Rectangle rect) {
    int width = 0, height = 0;
    if (rect.x1 != rect.x2) {
         width = (rect.x2 - rect.x1);
    }
    else {
         width = (rect.x2 - rect.x3);
    }
    width = width < 0 ? -width : width;
    if (rect.y1 != rect.y2) {
         height = (rect.y2 - rect.y1);
    }
    else {
         height = (rect.y2 - rect.y3);
    }
    height = height < 0 ? -height : height;
    return 2 * (width + height);
}


#endif