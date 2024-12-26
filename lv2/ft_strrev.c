
#include<unistd.h>
#include<stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
char    *ft_strrev(char *str)
{
    int start = 0;
    int end = ft_strlen(str) - 1;
    while(start < end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    return(str);
}
int main()
{
    char str[]= "hello";
    printf("%s",ft_strrev(str));
}