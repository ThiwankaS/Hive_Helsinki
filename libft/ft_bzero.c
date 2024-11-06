/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:06:11 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/06 16:51:28 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t size)
{
	unsigned char	*ptr;
	size_t	count;

	ptr = (unsigned char *)s;
	count = 0;
	while (count < size)
	{
		*(ptr + count) = 0;
		count++;
	}
	return (s);
}
