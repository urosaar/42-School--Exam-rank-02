
#include<stdio.h>
#include<unistd.h>

void ft_putnbr(n)
{
    if(n > 9)
        ft_putnbr(n / 10);
    char digit = n % 10 + '0';
    write(1,&digit,1);
}
int ft_atoi(char *s)
{
    int res = 0;
    while(*s)
        res = res * 10 + *s++ - '0';
    return(res);
}
int ft_isprime(n)
{
    int i = 2;
    if(n <= 1)
     return(0);
     while( i * i <= n)
     {
        if( n % i == 0)
            return(0);
        i++;
     }
     return(1);
}
int main(int ac , char **av)
{
    if(ac == 2)
    {
        int nbr = ft_atoi(av[1]);
        int sum = 0;
        while(nbr > 0)
        {
            if(ft_isprime(nbr))
                sum += nbr;
            nbr--;
        }
        ft_putnbr(sum);
    }
    else if(ac !=2)
        ft_putnbr(0);
    write(1,"\n",1);
}