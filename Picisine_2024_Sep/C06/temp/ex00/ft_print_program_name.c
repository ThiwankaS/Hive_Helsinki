/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 14:19:34 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/18 15:34:56 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*str;
	int		count;

	if (argc > 0)
	{
		str = argv[0];
		count = 0;
		while (*(str + count))
		{
			count++;
		}
		write(1, str, count);
		write(1, "\n", 1);
	}
	return (0);
}
