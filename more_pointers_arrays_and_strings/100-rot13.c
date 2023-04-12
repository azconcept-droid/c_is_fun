#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */
char *rot13(char *str)
{
    int i = 0, j = 0;
    char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFJHIJKLMNOPQRSTUVWXYZ";
    char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

    while (str[i] != '\0')
    {
        while (alpha[j] != '\0')
        {
            if (str[i] == alpha[j])
            {
                str[i] = rot13[j];
                break;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (str);
}
