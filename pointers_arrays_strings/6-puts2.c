#include <unistd.h>
void puts2(char *str);
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);
	return (0);
}
/**
* puts2 - prints next 2 character of a string
* @str: pointer to the string
*
* Description: prints every other character of a string,
* starting with the first character, followed by anew line.
* Return: Always 0.
*/
void puts2(char *str)
{
	while (*str)
	{
		write(1, str, 1);	/*Print to stdout each time*/
		str = str + 2;	/*Jump to next 2 character*/
	}
	write(1, "\n", 1);	/*Endline*/
}
