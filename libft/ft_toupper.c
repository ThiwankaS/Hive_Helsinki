int ft_toupper(long int param)
{
    if (param >= 97 && param <= 122)
    {
        return (param - 32);
    }
    else
    {
        return (param);
    }
}