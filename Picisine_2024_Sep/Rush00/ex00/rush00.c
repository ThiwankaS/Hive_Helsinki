/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 13:19:23 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/08 16:39:19 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_exceptions(int x, int y)
{
	int	check;

	check = 1;
	if (x <= 0 || y <= 0)
	{
		write(1, "NO MINUS OR ZEROES PLEASE\n", 26);
		check = 0;
	}
	else if (x >= 2147483647 || y >= 2147483647)
	{
		write(1, "MAX INT EXCEEDED\n", 18);
		check = 0;
	}
	return (check);
}

void	print_row(int x, int z, char a, char b)
{
	while (z <= x)
	{
		if (z == 1 || z == x)
		{
			ft_putchar(a);
		}
		else
		{
			ft_putchar(b);
		}
		z++;
	}
}

void	rush(int x, int y)
{
	int	w;
	int	z;
	int	check;

	check = check_exceptions(x, y);
	if (check != 0)
	{
		w = 1;
		while (w <= y)
		{
			z = 1;
			if (w == 1 || w == y)
			{
				print_row(x, z, 'o', '-');
			}
			else
			{
				print_row(x, z, '|', ' ');
			}
			w++;
			write(1, "\n", 1);
		}
	}
}
