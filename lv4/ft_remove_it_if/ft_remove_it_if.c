
#include<stdlib.h>
#include<ft_list.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list == NULL || *begin_list == NULL)
        return;
    t_list *now = *begin_list;
    if(cmp(now ->data , data_ref) == 0)
    {
        *begin_list = now->next;
        free(now);
        ft_list_remove_if(begin_list, data_ref,cmp);
    }
}