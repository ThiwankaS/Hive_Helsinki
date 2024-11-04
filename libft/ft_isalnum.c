int ft_isalnum(long int param)
{
    if ((param >= 48 && param <= 57) || (param >= 65 && param <= 90) || (param >= 97 && param <= 122))
    {
        return (1);
    }
    else
    {
        return (0);
    }
}