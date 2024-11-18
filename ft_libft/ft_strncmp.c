/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:24:55 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/18 11:24:21 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmpchar(char c1, char c2)
{
	if ((unsigned char)c1 != (unsigned char)c2)
		return ((unsigned char)c1 - (unsigned char)c2);
	return (0);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while (s1[count] && s2[count] && count < n)
	{
		if (ft_cmpchar(s1[count], s2[count]))
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		count++;
	}
	if (count < n)
		return (ft_cmpchar(s1[count], s2[count]));
	return (0);
}
