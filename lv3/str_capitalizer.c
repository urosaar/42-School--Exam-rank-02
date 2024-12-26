#include <unistd.h>

void str_capitaliz( char *str)
{
    int i = 0;
    while(str[i])
    { 
        if((i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') && (str[i]>= 'a' && str[i] <= 'z'))
             str[i] -= 32;
        else if(!(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') &&(str[i] >= 'A' && str[i] <= 'Z'))
            str[i] += 32;
        write(1,&str[i],1);
        i++;
    }
}
int main( int ac,char **av)
{
    int i = 1;
    if( ac < 2)
        write(1,"\n",1);
    else
    {
        while( i < ac)
        {
            str_capitaliz(av[i]);
            write(1,"\n",1);
            i++;
        }
    }
}
