#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *str = "Hive Helsinki";
	printf("original funtion : %s\n",strrchr(str,'i'));
	printf("own library funtion : %s\n",ft_strrchr(str,'i'));
    return (0);
}
