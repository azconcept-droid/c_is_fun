#include <stdio.h>

char *_strncpy(char *, char *, int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98];
	char *p;
	int i;

	for (i = 0; i < 98 - 1; i++)
		s1[i] = '-';
	s1[i] = '\0';
	printf("%s\n", s1);
	p = _strncpy(s1, "Talk is cheap. Show me the code.\n", 14);
	printf("%s\n", s1);
	printf("%s\n", p);
	for (i = 0; i < 98; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", s1[i]);
	}
	printf("\n");
	return (0);
}
int _strlen(char *str)
{
	int count = 0;

	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char *_strncpy(char *dest, char *src, int n)
{
	int i, j = 0, k;

	i = _strlen(src);

	if (n <= i)
	{
		for (k = 0; k < n; k++, j++)
		{
			dest[j] = src[k];
		}
	}

	if (n > i)
	{
		for (k = 0; k < i; k++, j++)
			dest[j] = src[k];
		for (; j < n; j++)
			dest[j] = '\0';
	}
	return (dest);
}