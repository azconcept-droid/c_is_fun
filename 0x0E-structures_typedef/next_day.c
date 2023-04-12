#include "date.h"
int main(void)
{
    struct date thisDay, nextDay;

    printf("Enter today's date (mm dd yyyy) ");
    scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

    nextDay = dateUpDate(thisDay);

    printf("Tommorrow's date is %i/%i/%.2i\n", nextDay.month, nextDay.day, nextDay.year % 100);
    return (0);
}

int numOfDays(struct date d)
{
    int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int days;

    if (isLeapYear(d.year) == true && d.month == 2)
        days = 29;
    else
        days = daysPerMonth[d.month - 1];

    return (days);
}

bool isLeapYear(int year)
{
    bool leapYearFlag;

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        leapYearFlag = true;    /*Is a leap year*/
    else
        leapYearFlag = false;   /*Not a leap year*/

    return (leapYearFlag);
}

struct date dateUpDate(struct date thisDay)
{
    struct date tommorrow;

    if (thisDay.day != numOfDays(thisDay)) /*Next day*/
    {
        tommorrow.day = thisDay.day + 1;
        tommorrow.month = thisDay.month;
        tommorrow.year = thisDay.year;
    }
    else if (thisDay.month == 12) /*End of year*/
    {
        tommorrow.day = 1;
        tommorrow.month = 1;
        tommorrow.year = thisDay.year + 1;
    }
    else    /*End of month*/
    {
        tommorrow.day = 1;
        tommorrow.month = thisDay.month + 1;
        tommorrow.year = thisDay.year;
    }

    return (tommorrow);
}
