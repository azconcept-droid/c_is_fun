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
* puts_half - prints half of a string, followed by a new line.
* @str: pointer to the string
* Return: Always 0.
*/
void puts_half(char *str)
{
	char *r = str;	/*Pass the pointer to another pointer*/
	int n = 0;

	/*To get the total characters in the string*/
	while (*r++)
		n++;

	/*To get the half of the string length*/
	if (n % 2 != 0) /*If odd*/
		n = (n - 1) / 2;
	else
		n = n / 2;  /*if even*/

	/*Jump to the middle of the string*/
	str = str + n;

	/*Print string to standard output*/
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}
