/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:35:18 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 12:04:33 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial(nb -1);
		return (result);
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb = 5;
	int	result = ft_recursive_factorial(nb);
	printf("Factorial of %d (%d!) : %d\n", nb, nb, result);
	return (0);
}
*/
