
#include<unistd.h>

int main(int ac,char **av)
{
    int i = 0;
    int word_started = 0;
    if(ac == 2)
    {
        while(av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
            {
                if(word_started)
                {
                    write(1," ",1);
                    word_started = 0;
                }
            }
            else
            {
                write(1,&av[1][i],1);
                word_started = 1;
            }    
            i++;
         }
    }
    write(1,"\n",1);
}