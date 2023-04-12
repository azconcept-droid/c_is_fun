#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

char *cap_string(char *str)
{
	int i = 0, j = 0;
	char *delimiter = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		while (delimiter[j] != '\0')
		{
			if (str[i] == delimiter[j])
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] -= 32;
			j++;
		}
		j = 0;
		i++;
	}
	return (str);
}
