#include <stdio.h>

void rev_string(char *s);
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}

/**
 * rev_string - reverses a string.
 * @s: pointer to the first char
 * Return: nothing.
 */
void rev_string(char *s)
{
	char *r, tmp;

	r = s;  /*Pass to another pointer to point to the right*/
	/*Move pointer r to extreme rigth*/
	while (*(r + 1) != '\0')
		r++;

	/*swapping*/
	while (s < r)
	{
		tmp = *s;   /*Hold the value of where *s points to temporarily*/

		*s = *r;    /*Pass the value of *r in *s*/

		*r = tmp;   /*Pass back the old value of *s to *r*/

		s = s + 1;  /*Move the left pointer forward*/

		r = r - 1;  /*Move the right pointer backward*/
	}
}
