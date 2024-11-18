/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:35 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/18 11:16:31 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	count;

	count = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (count < n)
	{
		if (str1[count] != str2[count])
			return ((unsigned char)str1[count] - (unsigned char)str2[count]);
		count++;
	}
	return (0);
}
