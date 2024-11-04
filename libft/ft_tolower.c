int ft_tolower(long int param)
{
    if (param >= 65 && param <= 90)
    {
        return (param + 32);
    }
    else
    {
        return (param);
    }
}