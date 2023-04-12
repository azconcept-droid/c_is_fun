#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    char r[100];
    /*char r2[10];
    char r3[11];*/
    char *res;

    res = infinite_add(n, m, r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    /*n = "1234567890";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    n = "999999999";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    res = infinite_add(n, m, r3, 11);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }*/
    return (0);
}
int _strlen(char *str)
{
    int count = 0;

    while (*str)
    {
        count++;
        str++;
    }
    return (count);
}
void rev_str(char *str)
{
    char *rev_ptr = str, temp;

    while (*rev_ptr)
        rev_ptr++;

    /*rev_ptr--;*/
    /*SWAP*/
    while (str < rev_ptr)
    {
        temp = *str;
        *str = *rev_ptr;
        *rev_ptr = temp; 
        str++;
        rev_ptr--;
    }
}
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, digit1, digit2, r_digit, unit, carry = 0;
    int len_n1, len_n2;

    len_n1 = _strlen(n1);
    len_n2 = _strlen(n2);

    rev_str(n1);
    rev_str(n2);
    /*printf("len_n1 = %d\nlen_n2 = %d\n", len_n1, len_n2);*/

    if (len_n1 >= size_r)
            return (0);
        /*printf("n1[%d] = %c\n", len_n1, n1[len_n1 - 1]);
        printf("n2[%d] = %c\n", len_n2, n2[len_n2 - 1]);*/
    len_n1 = len_n1 - 1;
    len_n2 = len_n2 - 1;

    while (len_n1 >= 0)
    {
        digit1 = n1[i] - '0';
        digit2 = n2[i] - '0';
        r_digit = digit1 + digit2 + carry;
        /*printf("r_digit = %d", r_digit);*/
        if (r_digit >= 10)
        {
            unit = r_digit % 10;
            /*printf("unit = %d", unit);*/
            carry = r_digit / 10;
            r[len_n1] = unit;
        }
        else
        {
            r[len_n1] = r_digit;
            carry = 0;
        }
        if (i == len_n2)
            if (carry)
            {
                len_n1++;
                r[len_n1] = carry;
                break;
            }
        i++;
        len_n1--;
    }

/*if (len_n1 > len_n2)
    {
        if (len_n1 > len_n2)
        max_len = len_n1;
    else
        max_len = len_n2;
    printf("max_len = %d\nsize_r = %d\n", max_len, size_r);
    if (max_len >= size_r)
        return (0);

    printf("n1[%d] = %c\n", len_n1, n1[len_n1 - 1]);
    printf("n2[%d] = %c\n", len_n2, n2[len_n2 - 1]);
    len_n1 = len_n1 - 1;
    len_n2 = len_n2 - 1;

    max_len = max_len + 1;
    while (len_n1 >= 0 && len_n2 >= 0)
    {
        digit1 = n1[len_n1] - '0';
        digit2 = n2[len_n2] - '0';
        r_digit = digit1 + digit2 + carry;
        printf("r_digit = %d", r_digit);
        if (r_digit >= 10)
        {
            unit = r_digit % 10;
            printf("unit = %d", unit);
            carry = r_digit / 10;
        }
    }
    }
    else if(len_n1 < len_n2)
    {
        if (len_n1 > len_n2)
        max_len = len_n1;
    else
        max_len = len_n2;
    printf("max_len = %d\nsize_r = %d\n", max_len, size_r);
    if (max_len >= size_r)
        return (0);

    printf("n1[%d] = %c\n", len_n1, n1[len_n1 - 1]);
    printf("n2[%d] = %c\n", len_n2, n2[len_n2 - 1]);
    len_n1 = len_n1 - 1;
    len_n2 = len_n2 - 1;

    max_len = max_len + 1;
    while (len_n1 >= 0 && len_n2 >= 0)
    {
        digit1 = n1[len_n1] - '0';
        digit2 = n2[len_n2] - '0';
        r_digit = digit1 + digit2 + carry;
        printf("r_digit = %d", r_digit);
        if (r_digit >= 10)
        {
            unit = r_digit % 10;
            printf("unit = %d", unit);
            carry = r_digit / 10;
        }
    }
    }
    else
    {
        if (len_n1 >= size_r)
            return (0);
        printf("n1[%d] = %c\n", len_n1, n1[len_n1 - 1]);
        printf("n2[%d] = %c\n", len_n2, n2[len_n2 - 1]);
        len_n1 = len_n1 - 1;
        len_n2 = len_n2 - 1;

        while (len_n1 >= 0)
        {
            digit1 = n1[i] - '0';
            digit2 = n2[i] - '0';
            r_digit = digit1 + digit2 + carry;
            printf("r_digit = %d", r_digit);
            if (r_digit >= 10)
            {
                unit = r_digit % 10;
                printf("unit = %d", unit);
                carry = r_digit / 10;
                r[len_n1] = unit;
            }
            else
            {
                r[len_n1] = r_digit;
                carry = 0;
            }
            if (i == len_n2)
                if (carry)
                {
                    len_n1++;
                    r[len_n1] = carry;
                    break;
                }
            i++;
            len_n1--;
        }
    }*/
    return (r);
}
