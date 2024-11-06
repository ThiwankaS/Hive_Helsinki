/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:51:56 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/06 17:58:52 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	count;
	size_t	step;

	count = 0;
	step = 0;
	len = ft_strlen(src);
	while (dst[count] && count < size)
		count++;
	while (src[step] && (count + step + 1) < size)
	{
		dst[count + step] = src[step];
		step++;
	}
	if (count < size)
		dst[count + step] = '\0';
	return (count + len);
}
