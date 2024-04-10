/**************************************
 * 24_hours.c
 * _hours() -prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * @g-character from the user
 * Return 0 on success
 * ***********************************************/





#include "main.h"




void jack_bauer(void)


{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            _putchar((hour / 10) + '0');
            _putchar((hour % 10) + '0');
            _putchar(':');
            _putchar((minute / 10) + '0');
            _putchar((minute % 10) + '0');
            _putchar('\n');
        }
    }
}

