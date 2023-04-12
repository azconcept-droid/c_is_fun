#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_number(int n)
{
    int digit, max_place_value = 1, temp;

    if (n < 0)
    {
        n = n * -1;
        _putchar('-');
    }
    temp = n;   /*Hold number temporarily to get max place value*/
    while (temp > 9)
    {
        max_place_value *= 10;
        temp = temp / 10;
    }
    /*Print out each digits of the integer */
    while (max_place_value >= 1)
    {
        digit = (n / max_place_value) % 10;
        _putchar(digit + '0');
        max_place_value /= 10;
    }
}

/*
d = d / 10;
count = count * 10;
1st iteration
d = 1024 / 10 = 102;
count = 1 * 10 = 10;
2nd
d = 102 / 10 = 10;
count = 10 * 10 = 100;
3rd
d = 10 / 10 = 1;
count = 100 * 10 = 1000;
4th 1 > 9
loop ends

for (; count >= 1; count = count / 10)
    {
        digit = (n / count) % 10;
        1st iteration
        digit = (1024 / 1000) % 10
              = (1) % 10
              = 1
        2nd iteration
        digit = (1024 / 100) % 10
              = (10) % 10
              = 0
        3rd iteration
        digit = (1024 / 10) % 10
              = (102) % 10
              = 2
        4th iteration
        digit = (1024 / 1) % 10
              = (1024) % 10
              = 4
        Loop ends
    }
*/