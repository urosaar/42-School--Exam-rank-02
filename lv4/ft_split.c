#include <stdlib.h>

int count_words(char *str)
{
    int count = 0;
    int in_word = 0;
    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}
char *copy_word(char *str, int len)
{
    char *word = (char *)malloc(len + 1);
    int i = 0;
    while (i < len)
    {
        word[i] = str[i];
        i++;
    }
    word[len] = '\0';
    return word;
}

char **ft_split(char *str)
{
    int i = 0;
    int len;
    int in_word = 0;
    char **res = (char **)malloc((count_words(str) + 1) * sizeof(char *));
    if (!res)
        return NULL;

    while (*str)
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
            in_word = 0;
        else if (in_word == 0)
        {
            in_word = 1;
            len = 0;
            while (str[len] && str[len] != ' ' && str[len] != '\t' && str[len] != '\n')
                len++;
            res[i++] = copy_word(str, len);
            str += len - 1;
        }
        str++;
    }
    res[i] = NULL;
    return res;
}
