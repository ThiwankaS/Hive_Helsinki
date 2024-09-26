/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:50:58 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/17 17:02:54 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb * ft_recursive_power(nb, power -1);
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int nb = 2;
	int	pow = 3;
	int	result = ft_recursive_power(nb, pow);
	printf(" %d to the power %d : %d\n",nb,pow,result);
	return (0);
}*/
