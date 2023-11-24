#include <stdio.h>

typedef struct {
    int day;
    int month;
    int year;
} Date;

void addDay(Date *date) {
    date->day++;
    if (date->month == 11 && date->day > 30) {
        date->day = 1;
        date->month++;
    }
    if (date->month == 12 && date->day > 31) {
        date->day = 1;
        date->month = 1;
        date->year++;
    }
}

int main() {
    FILE *file = fopen("D:/Documents/dates.txt", "w");

    Date date = {24, 11, 2023}; // Начальная дата: 24 ноября 2023 года

    for (int i = 0; i < 10; i++) {
        fprintf(file, "%02d.%02d.%04d\n", date.day, date.month, date.year);
        addDay(&date);
    }

    fclose(file);
    return 0;
}
