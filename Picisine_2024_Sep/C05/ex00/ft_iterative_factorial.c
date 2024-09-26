/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:19:14 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/17 16:34:07 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		while (nb > 0)
		{
			result = result * nb;
			nb--;
		}
		return (result);
	}
	return (0);
}

/*
# include <stdio.h>

int	main(void)
{
	int	nb = -3;
	int	result = ft_recursive_factorial(nb);
	printf("Factorial of %d (%d!) : %d",nb,nb,result);
	return (0);
}*/
