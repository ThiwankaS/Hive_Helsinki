/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:59:44 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/18 11:25:16 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;
	size_t	step;

	count = 0;
	step = 0;
	if (little[0] == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (big[count] != '\0' && count < len)
	{
		if (big[count] == little[step])
		{
			while (big[count + step] == little[step] && count + step < len)
			{
				if (little[step + 1] == '\0')
					return ((char *)big + count);
				step++;
			}
			step = 0;
		}
		count++;
	}
	return (NULL);
}
