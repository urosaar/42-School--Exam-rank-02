
#include<stdio.h>

int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int res;
    while(s1[i] && s2[i] && s1[i] != s2[i])
    {
        res = s1[i] - s2[i];
        i++;   
    }
    return(res);
}
int main()
{
    printf("%d",ft_strcmp("6","7"));
}