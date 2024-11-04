#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include "libft.h"

int main(void)
{
    char *str = "Hive_helsinki";
    while (*str)
    {
        printf("%d\n", *str);
        str++;
    }
    return (0);
}