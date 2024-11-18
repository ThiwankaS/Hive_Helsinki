/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 19:56:30 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 10:14:03 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	calculate_sqrt(int nb, float try, float step)
{
	if ((try * try) == nb)
	{
		return (try);
	}
	if ((try * try) > nb)
	{
		if (step > 0.0001)
			return (calculate_sqrt(nb, (try - step), step / 10.0));
		else
			return (-1);
	}
	else
	{
		return (calculate_sqrt(nb, (try + step), step));
	}
}

int	ft_sqrt(int nb)
{
	int		result;
	float	try;
	float	step;

	try = 0.0;
	step = 1.0;
	if (nb == 0)
		return (0);
	else if (nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	result = calculate_sqrt(nb, try, step);
	if (result == -1)
		return (0);
	else
		return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb = 2;
	int	result = ft_sqrt(nb);
	printf("Square root of %d is : %d\n", nb, result);
	return (0);
}*/
