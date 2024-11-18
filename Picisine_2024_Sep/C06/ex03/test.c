#include <stdio.h>


void	ft_swap(char **a, char **b)
{
	char	*temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (*(s1 + count) == *(s2 + count) && *((s1 + count)))
	{
		count++;
	}
	return ((*(s1 + count) - *(s2 + count)));
}

int	main(int argc, char *argv[])
{
	int	count;
	int	step;
	int	i;

	count = 1;
	step = 1;
	i = 1;
	if (argc > 1)
	{
		while (count < argc)
		{
			step = count + 1;
			while (step < argc)
			{
				if (ft_strcmp(argv[count],argv[step]) > 0)
				{
					ft_swap(&argv[count], &argv[step]);
				}
				step++;
			}
			count++;
		}
		while (i < argc)
		{
			printf("%s\n",argv[i]);
			i++;
		}
	}
	return (0);
}
