/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:38:01 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/16 15:12:05 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			count;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	count = 0;
	if (n == 0)
		return (dest);
	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	while (count < n)
	{
		ptr2[count] = ptr1[count];
		count++;
	}
	return (dest);
}
