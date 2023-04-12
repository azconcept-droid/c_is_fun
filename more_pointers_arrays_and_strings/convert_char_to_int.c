#include <stdio.h>

int main(void)
{
    char one_in_string = '9', two_in_string = '2';
    int one_in_num = one_in_string - '0';
    int two_in_num = two_in_string - '0';

    printf("\'9\' in integer is %d\n", one_in_num);
    printf("\'2\' in integer is %d\n", two_in_num);
    printf("Convert back to integer\n");
    printf("1 in character is \'%c\'\n", one_in_num + '0');
    printf("2 in character is \'%c\'\n", two_in_num + '0');

    return (0);
}