#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
/**
 * reverse_array - reverses the content of an array of integers.
 * @a : array of integers to the array
 * @n : number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *L, temp;

	L = a;
	while (n > 0)
	{
		n--;
		L++;
	}
	L = L - 1;
	/*SWAPING*/
	while (a < L)
	{
		temp = *a;
		*a = *L;
		*L = temp;
		a++;
		L--;
	}
}
