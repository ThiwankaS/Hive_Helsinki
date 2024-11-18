/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:04:34 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 12:08:53 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
	{
		return (-1);
	}
	else
	{
		if (index == 0)
			result = 0;
		else if (index == 1)
			result = 1;
		else if (index == 2)
			result = 1;
		else
			result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb = 9;
	int	fib = ft_fibonacci(nb);
	printf("%d th fibbonacci number is : %d\n", nb, fib);
	return (0);
}*/
