int ft_isprint(long int param)
{
    if (param >= 32 && param <= 126)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}