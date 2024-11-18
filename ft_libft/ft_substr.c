/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:06:01 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/18 14:31:38 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	count;

	count = 0;
	while (count < n && src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_len;
	size_t	sub_len;
	char	*str;

	if (!s)
		return (NULL);
	src_len = ft_strlen(s);
	if (start >= src_len)
		return (ft_strdup(""));
	sub_len = src_len - start;
	if (sub_len > len)
		sub_len = len;
	str = malloc(sizeof(char) * (sub_len + 1));
	if (!str)
		return (NULL);
	ft_strncpy(str, &s[start], sub_len);
	str[sub_len] = '\0';
	return (str);
}
