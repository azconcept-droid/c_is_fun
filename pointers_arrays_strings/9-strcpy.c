#include <stdio.h>
char *_strcpy(char *dest, char *src);
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
	printf("%s", s1);
	printf("%s", ptr);
	return (0);
}
/**
 * _strcpy - copies the string pointed to by src
 * @src: pointer to string to be copied
 * @dest: pointer to destination to copy to
 *
 * Description: copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	/*Copy from source to destination*/
	for (i = 0; *src; i++)
	{
		dest[i] = *src;
		src++;
	}
	/*Include terminating null byte to end of destination*/
	dest[i] = '\0';
	return (dest);
}
