/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:38:01 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/06 16:50:12 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*ptr1;
	char	*ptr2;

	count = 0;
	ptr1 = (char *)src;
	ptr2 = (char *)dest;
	while (count < n)
	{
		ptr2[count] = ptr1[count];
		count++;
	}
	return (dest);
}
