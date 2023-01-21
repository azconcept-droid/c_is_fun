#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Talk is cheap. Show me the code.\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
/**
 * string_toupper - changes lowercase letters to uppercase.
 * @str: letters to change
 *
 * Return: uppercase letters
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
