/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:27 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/16 12:40:25 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		if ((unsigned char)s[count] == (unsigned char)c)
		{
			return ((char *)(s + count));
		}
		count++;
	}
	if ((unsigned char)s[count] == (unsigned char)c)
		return ((char *)(s + count));
	return (NULL);
}
