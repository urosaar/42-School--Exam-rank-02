#include<stdio.h>
int		max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    if(len == 0)
        return(0);
    int res = tab[i];
    while(i < len)
    {
        if(res < tab[i])
            res = tab[i];
        i++;
    }
    return(res);
}
int main()
{
    int arr[] = {};
    unsigned int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d",max(arr,len));
}