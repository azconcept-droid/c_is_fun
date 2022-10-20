#include <stdio.h>

void rev_string(char *s);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

void rev_string(char *s)
{
    char *r, tmp;

    r = s;
    /*rigth pointer*/
    while(*(r + 1) != '\0')
        r++;

    /*swapping*/
    while (s < r)
    {
        tmp = *s;
        *s = *r;
        *r = tmp;
        s = s + 1;
        r = r - 1;
    }
}