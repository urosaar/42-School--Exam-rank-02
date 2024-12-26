
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *src)
{
    int i = 0;
    while(src[i])
    {
        i++;
    }
    return(i);
}
char    *ft_strdup(char *src)
{
    int i = 0;
    char *dst = malloc(ft_strlen(src) * sizeof(char));
    if(dst == 0)
        return(NULL);
    while(src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return(dst);
}
int main()
{
    char s[] = "hello";
    char *d = ft_strdup(s);
    printf("%s",d);
}
