#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}

char *leet(char *str)
{
    int i = 0, j = 0;
    char key[] = {'a', 'e', 'o', 't', 'l'};
    int value[] = {4, 3, 0, 7, 1};

    while (str[i] != '\0')
    {
        while (key[j] != '\0')
        {
            if (str[i] == key[j] || str[i] == key[j] - 32)
                str[i] = '0' + value[j];
            j++;
        }
        j = 0;
        i++;
    }
    return (str);
}