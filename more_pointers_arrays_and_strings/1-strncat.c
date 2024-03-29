#include <stdio.h>
char *_strncat(char *dest, char *src, int n);
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return (0);
}
/**
 * _strncat - concatenates two strings.
 * @dest : destination string
 * @src : source string
 * @n : at most n bytes from source
 *
 * Description: This function appends the src string
 * to the dest string it uses at most n bytes from src
 * and src is not null-terminated if it contains n or more bytes
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
		j++;

	if (n > j)
		n = j;

	for (; k < n; k++, i++)
		dest[i] = src[k];

	dest[i] = '\0';
	return (dest);
}
