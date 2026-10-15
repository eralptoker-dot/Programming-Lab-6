
#include <stdio.h>

int countDays(int month, int year) {
    if (month == 2) {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            return 29;
        }
        else {
            return 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    else if (month >= 1 && month <= 12) {
        return 31;
    }
    else {
        return 0;
    }
}

int main() {
    int month, year;

    printf("Input the desired month number please: ");
    scanf("%d", &month);

    printf("Now, input the year: ");
    scanf("%d", &year);

    if (year < 1 || month < 1 || month > 12) {
        printf("Invalid month or year\n");
    }
    else {
        printf("%d days\n", countDays(month, year));
    }

    return 0;
}