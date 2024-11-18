/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:08:38 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/24 12:34:15 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printstr(char *str)
{
	int	count;

	count = 0;
	while (*(count + str))
		count++;
	write(1, str, count);
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(count + str))
		count++;
	return (count);
}
