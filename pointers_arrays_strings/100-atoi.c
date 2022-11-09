#include <stdio.h>
#include <limits.h>
int _atoi(char *s);
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
	int nb;

	printf("%d\n", INT_MAX);
	printf("%d\n", INT_MIN);
	nb = _atoi("    98");
	printf("%d\n", nb);
	nb = _atoi("    -402");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("    0");
	printf("%d\n", nb);
	nb = _atoi("azeez");
	printf("%d\n", nb);
	nb = _atoi("       Suite 402");
	printf("%d\n", nb);
	/*nb = _atoi(" ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi(" + + - -98 Battery Street; San Francisco, CA 94111 - USA ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te - 402 #cisfun :)");
	printf("%d\n", nb);*/
	return (0);
}

int _atoi(char *s)
{
	int int_value = 0, sign = 1;

	/*Ignore leading white spaces*/
	while (*s == ' ')
		s++;

	/*If the first character is minus*/
	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	/*Convert string number to integer*/
	while (*s)
	{
		/*If the string is a mixture of numbers*/
		/*and letters extract the number*/
		if (*s >= '0' && *s <= '9')
		{
			int_value = (int_value * 10) + (*s - '0');
		}
		s++;
	}
	return (int_value * sign);
}
