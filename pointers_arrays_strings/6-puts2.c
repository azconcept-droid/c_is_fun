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
* main - check the code
*
* Return: Always 0.
*/
void puts2(char *str)
{
    while (*str)
    {
        write(1, str, 1);
        str = str + 2;
    }
    write(1, "\n", 1);
}
