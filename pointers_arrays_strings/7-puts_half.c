#include <unistd.h>
#include <stdio.h>
void puts_half(char *str);
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
    char *str;
    str = "0123456789AB";
    puts_half(str);
    return (0);
}
/**
* main - check the code
*
* Return: Always 0.
*/
void puts_half(char *str)
{
    char *r = str;
    int n = 0;

    /*To get the total characters int the string*/
    while (*r++)
        n++;

    if (n % 2 != 0)
        n = (n - 1) / 2;
    else
        n = n / 2;

    str = str + n;
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}
