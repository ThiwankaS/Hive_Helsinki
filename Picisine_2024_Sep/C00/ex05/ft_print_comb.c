/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:06:06 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/10 09:12:06 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	digits[3];

	digits[0] = '/';
	while (digits[0]++ <= 54)
	{
		digits[1] = digits[0];
		while (digits[1]++ <= 55)
		{
			digits[2] = digits[1];
			while (digits[2]++ <= 56)
			{
				if (digits[0] != '7' || digits[1] != '8' || digits[2] != '9')
				{
					write(1, digits, 3);
					write(1, ", ", 2);
				}
				else
				{
					write(1, digits, 3);
					write(1, "\n ", 2);
				}
			}
		}
	}
}
