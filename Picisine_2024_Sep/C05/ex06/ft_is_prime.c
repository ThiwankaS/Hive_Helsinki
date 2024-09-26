/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:22:25 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 12:10:31 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_for_prime(int nb, int step)
{
	if (step <= nb / 2)
	{
		if (nb % step == 0)
			return (0);
		else
			return (check_for_prime(nb, (step + 1)));
	}
	return (1);
}

int	ft_is_prime(int nb)
{
	int	step;
	int	check;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (0);
	else if (nb == 1)
		return (0);
	step = 2;
	check = check_for_prime(nb, step);
	if (check == 1)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void)
{
	int	nb = 17;
	int check = ft_is_prime(nb);
	if(check)
		printf("%d is a prime number.\n",nb);
	else
		printf("%d is not a prime number.\n",nb);
	return (0);
}
*/
