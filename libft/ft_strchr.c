const char *ft_strchr(const char *str, int param)
{
    while (*str)
    {
        if (*str == param)
        {
            return (str);
        }
        str++;
    }
    return ((char *)0);
}