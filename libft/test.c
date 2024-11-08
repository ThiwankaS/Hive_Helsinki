#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char *s1 = "Hive_+Helsi+nki";
	char c = '+';
	char *dest = (char *)malloc(sizeof(char)*11);
	printf("result with strchr: %s\n",ft_strchr(s1,c));
	printf("result with strrchr: %s\n",ft_strrchr(s1,c));
	ft_strlcpy(dest,s1,10);
	printf("result with strlcpy: %s\n",dest);
	return (0);
}
