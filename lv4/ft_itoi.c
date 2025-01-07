#include <stdlib.h>

int get_length(int n)
{
    int i = 0;
    if (n == 0) 
        i = 1;
    else if( n < 0)
    {
        i++;
        n = -n;
    }
    while (n > 0)
    {
        n /= 10;
        i++;
    }
    return i;
}

void ft_putnbr(long n, char *str, int length)
{
    if (n == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return;
    }
    if (n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    str[length] = '\0';
    while (n > 0)
    {
        str[--length] = (n % 10) + '0';
        n /= 10;
    }
}
char *ft_itoa(int nbr)
{
    if (nbr == -2147483648) 
      {
        char *result = (char *)malloc(12);  
        if (!result) 
            return NULL;
        result[0] = '-';
        result[1] = '2';
        result[2] = '1';
        result[3] = '4';
        result[4] = '7';
        result[5] = '4';
        result[6] = '8';
        result[7] = '3';
        result[8] = '6';
        result[9] = '4';
        result[10] = '8';
        result[11] = '\0'; 
        return result;
    }
    int length = get_length(nbr);
    char *result = (char *)malloc(length + 1);
    if (!result)
        return NULL;

    long num = nbr; 
    ft_putnbr(num, result, length);

    return result;
}
