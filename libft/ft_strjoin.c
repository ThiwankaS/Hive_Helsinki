/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:36:18 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/08 17:41:48 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	int		step;
	char	*str;

	count = 0;
	step = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[count] != '\0')
	{
		str[count] = s1[count];
		count++;
	}
	while (s2[step] != '\0')
	{
		str[count + step] = s2[step];
		step++;
	}
	str[count + step] = '\0';
	return (str);
}
