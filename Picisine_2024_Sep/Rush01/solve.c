/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:43:47 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/15 21:45:00 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_solution(void)
{
	int	l;
	int	m;

	l = 0;
	while (l < 4)
	{
		m = 0;
		while (m < 4)
		{
			write(1, " 0 ", 3);
			m++;
		}
		write(1, "\n", 1);
		l++;
	}
}
