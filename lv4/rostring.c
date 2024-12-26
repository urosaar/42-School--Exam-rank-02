#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || c == '\t');
}

int main(int argc, char **argv)
{
    if (argc >= 2)
    {
        int i = 0;
        int word_start = 0;
        int first_word_end = 0;
        int first = 1;

        while (is_space(argv[1][i]))
            i++;
        word_start = i;
        while (argv[1][i] && !is_space(argv[1][i]))
            i++;
        first_word_end = i;

        while (argv[1][i])
        {
            while (argv[1][i] && is_space(argv[1][i]))
                i++;
            if (argv[1][i])
            {
                if (!first)
                    write(1, " ", 1);
                first = 0;
                while (argv[1][i] && !is_space(argv[1][i]))
                    write(1, &argv[1][i++], 1);
            }
        }
        if (!first)
            write(1, " ", 1);
        while (word_start < first_word_end)
            write(1, &argv[1][word_start++], 1);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}
