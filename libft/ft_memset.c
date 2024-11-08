/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:54:26 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/06 16:53:06 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	unsigned char	*ptr;
	size_t	count;

	ptr = (unsigned char *)s;
	count = 0;
	while (count < size)
	{
		*(ptr + count) = c;
		count++;
	}
	return (s);
}
