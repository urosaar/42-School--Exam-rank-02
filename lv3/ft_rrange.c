#include <stdlib.h>

int *ft_rrange(int start, int end) 
{
    int size = abs(end - start) + 1;
    int *arr = (int *)malloc(sizeof(int) * size);
    
    if (!arr)
        return NULL; 
    int i = 0;
    if (start <= end) 
    {
        int val = end;
        while (val >= start) 
        {
            arr[i++] = val;
            val--;
        }
    } 
    else 
    {
        int val = end;
        while (val <= start) 
        {
            arr[i++] = val;
            val++;
        }
    }
    return arr;
}
