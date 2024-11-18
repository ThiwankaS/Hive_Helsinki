/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:29:58 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/18 11:31:12 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charinset(char c, char const *set)
{
	size_t	count;

	count = 0;
	while (set[count])
	{
		if (set[count] == c)
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	count;
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && ft_charinset(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_charinset(s1[end - 1], set))
		end--;
	str = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	count = 0;
	while (start < end)
	{
		str[count] = s1[start];
		count++;
		start++;
	}
	str[count] = '\0';
	return (str);
}
