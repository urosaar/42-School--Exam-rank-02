#include "sort_list.h"

t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list *start = lst;
    int tmp;
    if(lst == 0)
        return(0);
    while( start -> next)
    {
        if(!cmp(start->data , start->next->data))
        {
            tmp = start->data;
            start->data = start->next->data;
            start->next->data = tmp;
            start = lst;
        }
        else
        start = start->next;
    }
    retutn(lst);
}
