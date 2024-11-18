/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:51:56 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/16 14:30:43 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	count;

	dst_len = 0;
	count = 0;
	src_len = ft_strlen(src);
	while (dst_len < size && dst[dst_len] != '\0')
		dst_len++;
	if (dst_len == size)
		return (size + src_len);
	while (count + dst_len + 1 < size && src[count] != '\0')
	{
		dst[dst_len + count] = src[count];
		count++;
	}
	if (dst_len + count < size)
		dst[dst_len + count] = '\0';
	return (dst_len + src_len);
}
