#include <stdio.h>
#include <stdlib.h>

int is_charset(char c, char *charset)
{
    int i = 0;
    while (charset[i] != '\0')
    {
        if (c == charset[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int	get_parameters(char *str, char *charset, int *max)
{
	int	count;
	int	length;
	int	streak;

	count = 0;
	length = 0;
	streak = 0;
	while (str[length] != '\0')
	{
		if (is_charset(str[length], charset))
		{
			count++;
			if (streak > *max && streak > 0)
				*max = streak;
			streak = 0;
		}
		else
		{
			streak++;
		}
		length++;
	}
	if (streak > *max && streak > 0)
		*max = streak;
	return (count);
}

int main(void)
{
    char str[50] = "&One&Two Three$$Four_&Eleven";
    char charset[8] = "& $_";
	int count = 0;
	int max = 0;
	count = get_parameters(str, charset, &max);
	printf("count : %d\n",count);
	printf("max : %d\n",max);
    return 0;
}
