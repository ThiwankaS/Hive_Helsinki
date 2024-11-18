/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:48:06 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/10 12:28:08 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				length;
	unsigned int	count;
	char			*str;

	count = 0;
	length = ft_strlen(s);
	str = (char *) malloc(sizeof(char) * (length + 1));
	if (!str)
		return (NULL);
	while (s[count] != '\0')
	{
		str[count] = f(count, s[count]);
		count++;
	}
	str[count] = '\0';
	return (str);
}
