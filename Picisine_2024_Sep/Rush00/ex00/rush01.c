/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 16:40:18 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/08 16:50:40 by tsomacha         ###   ########.fr       */
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

void	print_outer_row(int x, int z, int w, int y)
{
	while (z <= x)
	{
		if ((z == 1 && w == 1) || (z == x && w == y)x)
		{
			ft_putchar('/');
		}
		else if ((z == x && w == 1) || (z == 1 && w == y))
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
		z++;
	}
}

void	print_middle_row(int x, int z)
{
	while (z <= x)
	{
		if (z == 1 || z == x)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
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
				print_outer_row(x, z, w, y);
			}
			else
			{
				print_middle_row(x, z);
			}
			w++;
			write(1, "\n", 1);
		}
	}
}
