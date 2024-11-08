#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include "libft.h"

static int ft_is_removable(char c,const char *s)
{
	size_t count;

	count = 0;
	while (s[count])
	{
		if(c == s[count])
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	step;
	size_t	len;
	char	*str;

	count = 0;
	len = ft_strlen(s1);
	step = len - 1;
	while(s1[count] && ft_strchr(set,s1[count]))
		count++;
	while(s1[step] && ft_strchr(set,s1[step]) && step > count)
		step--;
	str = (char *)malloc(sizeof(char)*(step - count + 1));
	if(str)
		ft_strlcpy(str,&s1[count],(step-count + 1));
	return(str);
}

int main(void)
{
	char *s1 = "+++-*+Hive_+Helsinki++--**-";
	char *s2 = "-*+";
	char *temp = ft_strtrim(s1,s2);
	printf("result : %s\n",temp);
	free(temp);
	return (0);
}
