/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:05:19 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/16 12:55:59 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen(s);
	if ((unsigned char)s[count] == (unsigned char)c)
		return ((char *)(s + count));
	count--;
	while (count >= 0)
	{
		if ((unsigned char)s[count] == (unsigned char)c)
		{
			return ((char *)(s + count));
		}
		count--;
	}
	return (NULL);
}
