#include <stdlib.h>

int get_num_length(int nbr)
{
    int length = 0;
    if (nbr <= 0) 
        length++;
    while (nbr)
    {
        nbr /= 10;
        length++;
    }
    return length;
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
    int length = get_num_length(nbr);
    char *result = (char *)malloc(length + 1);
    if (!result)
        return NULL;

    long num = nbr; 
    ft_putnbr(num, result, length);

    return result;
}
