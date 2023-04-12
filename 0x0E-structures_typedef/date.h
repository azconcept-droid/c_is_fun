#ifndef _DATE_H
#define _DATE_H

#include <stdio.h>
#include <stdbool.h>

struct date
{
    int day;
    int month;
    int year;
};

int numOfDays(struct date);
bool isLeapYear(int);
struct date dateUpDate(struct date);

#endif /*_DATE_H*/