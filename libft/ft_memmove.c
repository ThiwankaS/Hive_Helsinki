/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:20:34 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/06 17:38:31 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	if(!src || !dest)
		return (NULL);
	if (src < dest)
	{
		count = n - 1;
		while (count > 0)
		{
			((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
			count--;
		}
	}
	else
	{
		count = 0;
		while (count < n)
		{
			((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
			count++;
		}
	}
	return (dest);
}
