/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:16:17 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 21:39:07 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
	{
		count++;
	}
	write(1, str, count);
	write(1, "\n", 1);
}

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
	int	i;
	int	step;

	step = 1;
	count = 1;
	i = 1;
	while (count < argc)
	{
		step = count + 1;
		while (step < argc)
		{
			if (ft_strcmp(argv[count], argv[step]) > 0)
				ft_swap(&argv[count], &argv[step]);
			step++;
		}
		count++;
	}
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
