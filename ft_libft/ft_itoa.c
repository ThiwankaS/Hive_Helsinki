/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:35:07 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/16 15:29:12 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlength(int n)
{
	int	count;

	count = 0;
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_writenumber(char *nbr, int length, long int n)
{
	int	count;

	count = length;
	nbr[count] = '\0';
	count--;
	if (n < 0)
	{
		n = n * (-1);
		while (n > 0 && count >= 0)
		{
			nbr[count--] = (n % 10) + 48;
			n = n / 10;
		}
		nbr[count] = '-';
	}
	else
	{
		while (n >= 0 && count >= 0)
		{
			nbr[count--] = (n % 10) + 48;
			n = n / 10;
		}
	}
}

static int	ft_numberlength(int n)
{
	int	length;

	length = 0;
	if (n == 0)
		length = 1;
	else if (n == -2147483648)
		length = 11;
	else if (n < 0)
		length = ft_getlength(-n) + 1;
	else
		length = ft_getlength(n);
	return (length);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		length;

	length = ft_numberlength(n);
	nbr = (char *)malloc((length + 1) * sizeof(char));
	if (!nbr)
		return (NULL);
	ft_writenumber(nbr, length, n);
	return (nbr);
}
