#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
    
bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

bool isValidDate(int day, int month, int year) {
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1) {
        return false;
    }
    if (month == 2) {
        if (isLeapYear(year)) {
            if (day > 29) {
                return false;
            }
        } else {
            if (day > 28) {
                return false;
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            return false;
        }
    } else {
        if (day > 31) {
            return false;
        }
    }
    return true;
}

int main() {
    int day, month, year;
    //printf("Enter a date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    if (!isValidDate(day, month, year)) {
        printf("Incorrect Date");
        return 0;
    }

    int a = (14 - month) / 12;
    int y = year - a;
    int m = month + 12 * a - 2;
    int d = (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12) % 7;

    char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("%s", weekdays[d]);

}
