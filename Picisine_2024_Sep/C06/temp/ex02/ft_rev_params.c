/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:08:19 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 17:10:45 by tsomacha         ###   ########.fr       */
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

	count = argc - 1;
	if (argc > 1)
	{
		while (count > 0)
		{
			ft_putstr(argv[count]);
			count--;
		}
	}
	return (0);
}
