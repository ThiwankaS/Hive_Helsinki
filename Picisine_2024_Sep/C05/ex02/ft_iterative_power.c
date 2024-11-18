/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:41:15 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 12:07:38 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int nb = 2;
	int	pow = 3;
	int	result = ft_iterative_power(nb, pow);
	printf(" %d to the power %d : %d\n",nb,pow,result);
	return (0);
}*/
