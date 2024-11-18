/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:35:45 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 17:09:23 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
	{
		count++;
	}
	write(1, str, count);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int		count;

	count = 1;
	if (argc > 1)
	{
		while (count < argc)
		{
			ft_putstr(argv[count]);
			count++;
		}
	}
	return (0);
}
