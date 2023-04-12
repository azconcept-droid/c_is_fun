#ifndef _TIME_H
#define _TIME_H

#include <stdio.h>

struct time 
{
    int secs;
    int min;
    int hr;
};

struct time timeUpdate(struct time);

#endif /*_TIME_H*/