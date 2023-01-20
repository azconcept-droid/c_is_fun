#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	/*printf("%p\n", s1);
	printf("%p\n", s2);*/
	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	return (0);
}

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	/*THOUGTH PROCESS
	1. Run through s1[i] & s2[i]
	2. IF s1[i] - s2[i] != 0 RETURN (s1[i] - s2[i])
	3. RETURN 0.
	*/
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
