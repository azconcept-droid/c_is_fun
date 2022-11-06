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
* main - check the code
*
* Return: Always 0.
*/
void print_rev(char *s)
{
    char *r;

    r = s;
    while (*r)
        r++;

    while (r != s - 1)
    {
        write(1, r, 1);
        r--;
    }
    write(1, "\n", 1);
}
