#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char *ft_substr(char *src, int start, int end)
{
	int size = end - start;
	char *str = (char *) malloc(size * sizeof(char));
	int i = 0;
	while(i + start < end)
	{
		str[i] = src[i + start];
		i++;
	}
	return (str);
}

int main(void)
{
	char *str = "1234567891234567891234567891234567891";
	int length = ft_strlen(str);
	int i = 0;
	int tab = length;

	while(length - i > 0)
	{
		if(i % 3 == 0 && i != 0)
		{
			str = ft_substr(str,(tab - i),tab);
			printf("Subs_str : %s\n",str);
			tab = tab - i;
		}
		i++;
	}


	printf("lenght : %d\n",length);

	return (0);
}
