#include <unistd.h>
void _puts(char *str);
/**
* main - check the code
*
* Return: Always 0.
*/
int main(void)
{
    char *str;
    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
/**
* _puts - print string to stdout.
*
* Return: Nothing.
*/
void _puts(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str++;
    }
    write(1, "\n", 1);
}
