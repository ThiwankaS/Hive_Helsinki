/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:12:40 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 11:55:30 by tsomacha         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int	step;
	int	next;

	step = 2;
	next = check_for_prime(nb, step);
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

/*
#include <stdio.h>

int main(void)
{
	int	nb = 15;
	int next = ft_find_next_prime(nb);
	if(next == nb)
		printf("%d is a prime number.\n",next);
	else
		printf("%d is the next prime number.\n",next);
	return (0);
}*/
