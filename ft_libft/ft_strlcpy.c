/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:43:46 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/16 18:30:21 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
	{
		while (src[count])
			count++;
		return (count);
	}
	while (count < size - 1 && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	if (count < size)
		dest[count] = '\0';
	while (src[count] != '\0')
		count++;
	return (count);
}
