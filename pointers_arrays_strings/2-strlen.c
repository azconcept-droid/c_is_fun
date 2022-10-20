#include <stdio.h>

int _strlen(char *s);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}

/**
 * _strlen - finds the length the length of a string
 * @s: pointer to string
 * Return: the length of a string.
 */
int _strlen(char *s)
{
    int i = 0;

    while (*(s + i))
    {
        i++;
    }

    return (i);
}
