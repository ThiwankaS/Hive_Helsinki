int ft_isascii(long int param)
{
    if (param >= 0 && param <= 127)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}