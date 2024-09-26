/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 18:08:35 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/09 18:09:37 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_result(char *digits)
{
	if (digits[0] == '9' && digits[1] == '8')
	{
		digits[5] = '\n';
		write(1, digits, 6);
	}
	else
	{
		write(1, digits, 6);
	}
}

void	iterator(char *digits)
{
	while (digits[0] <= '9')
	{
		digits[1] = '0';
		while (digits[1] <= '8')
		{
			digits[3] = digits[0];
			while (digits[3] <= '9')
			{
				digits[4] = digits[1] + 1;
				while (digits[4] <= '9')
				{
					print_result(digits);
					digits[4]++;
				}
				digits[3]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}

void	ft_print_comb2(void)
{
	char	digits[6];

	digits[0] = '0';
	digits[1] = '0';
	digits[2] = ' ';
	digits[3] = '0';
	digits[4] = '0';
	digits[5] = ',';
	iterator(digits);
}
