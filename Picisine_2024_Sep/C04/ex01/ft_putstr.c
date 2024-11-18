/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:12:32 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/16 13:16:36 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
	{
		write(1, &str[count], 1);
		count++;
	}
}

/*
int	main(void)
{
	char str[20] = "I am gonna make it!";
	ft_putstr(str);
	return (0);
}*/
