#include "time.h"

int main(void)
{
    struct time thisTime, nextTime;

    printf("Enter the time (hh min secs) ");
    scanf("%i:%i:%i\n", &thisTime.hr, &thisTime.min, &thisTime.secs);
     printf("Debug\n");
    nextTime = timeUpdate(thisTime);

    printf("Next time is %.2i:%.2i:%.2i\n", nextTime.hr, nextTime.min, nextTime.secs);

    return (0);
}

struct time timeUpdate(struct time thisTime)
{
    thisTime.secs++;

    if (thisTime.secs == 60)
    {
        thisTime.secs = 0;
        thisTime.min++;

        if (thisTime.min == 60)
        {
            thisTime.min = 0;
            thisTime.hr++;

            if (thisTime.hr == 24)
                thisTime.hr = 0;
        }
    }

    return (thisTime);
}
