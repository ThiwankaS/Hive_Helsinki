/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:59:44 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/06 18:01:34 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *littel, size_t n)
{
	size_t	count;
	size_t	step;

	count = 0;
	count = 0;
	if (littel == NULL || littel[0] == '\0')
		return ((char *)big);
	while (big[count] != '\0' && count < n)
	{
		if (big[count] == littel[step])
		{
			while (big[count + step] == littel[step] && count + step < n)
			{
				if (littel[step + 1] == '\0')
					return ((char *)big + count);
				step++;
			}
			step = 0;
		}
		count++;
	}
	return (NULL);
}
