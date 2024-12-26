
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int tmp;
    while( i < (size - 1))
    {
        if(tab[i] > tab[i + 1])
        {
            tmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tmp;
            i = 0;
        }
        else
            i++;
    }
}
#include<stdio.h>
int main()
{
    int a[] = {7,4,8,0,3};
    sort_int_tab(a,5);
    int i = 0;
    while(i < 5)
    {
        printf("%d ",a[i]);
        i++;
    }
}