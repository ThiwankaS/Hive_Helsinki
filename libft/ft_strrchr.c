/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:05:19 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/08 20:21:49 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int param)
{
	char *ptr;

	ptr = NULL;
	while (*s)
	{
		if (*s == param)
			ptr = (char *)s;
		s++;
	}
	return (ptr);
}
