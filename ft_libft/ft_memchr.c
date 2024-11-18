/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:49:38 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/18 11:16:08 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t size)
{
	char	*str;
	size_t	count;

	count = 0;
	str = (char *)s;
	while (count < size)
	{
		if ((unsigned char)str[count] == (unsigned char)c)
			return ((char *)s + count);
		count++;
	}
	return (NULL);
}
