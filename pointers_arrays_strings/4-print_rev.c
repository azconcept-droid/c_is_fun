#include <unistd.h>
void print_rev(char *s);
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}

/**
* print_rev - print string in reverse
*
* Return: Always 0.
*/
void print_rev(char *s)
{
	char *r;

	r = s;
	/*Move new pointer r to extreme right*/
	while (*r)
		r++;

	while (r != s - 1)  /*Check if r has gotten to the beginning*/
	{
		write(1, r, 1);
		r--;    /*Move pointer r backward*/
	}
	write(1, "\n", 1);
}
