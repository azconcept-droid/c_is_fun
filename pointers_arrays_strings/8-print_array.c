#include <stdio.h>
#include <unistd.h>
void print_array(int *a, int n);
/**
* main - check the code for
*
* Return: Always 0.
*/
int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;

	print_array(array, 5);
	return (0);
}
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array to be printed
 * @n: number of element in the array to be printed
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
