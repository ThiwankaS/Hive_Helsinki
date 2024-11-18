/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:00:25 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/16 15:23:15 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		count;
	int		len;
	char	*str;

	count = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	while (count < len)
	{
		str[count] = s[count];
		count++;
	}
	str[count] = '\0';
	return (str);
}
