
int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    const char *digits = "0123456789abcdef"; 

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++; 
    while (str[i])
    {
        char c = str[i];
        int digit_value = -1;
        if (c >= '0' && c <= '9')
            digit_value = c - '0';
        else if (c >= 'a' && c <= 'f')
            digit_value = c - 'a' + 10;
        else if (c >= 'A' && c <= 'F')
            digit_value = c - 'A' + 10;
        if (digit_value >= 0 && digit_value < str_base)
            result = result * str_base + digit_value;
        else
            break;
        i++;
    }
    return result * sign;
}

