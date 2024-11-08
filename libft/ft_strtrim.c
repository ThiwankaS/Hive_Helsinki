/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:29:58 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/08 20:44:56 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count;
	size_t	step;
	size_t	len;
	char	*str;

	count = 0;
	len = ft_strlen(s1);
	step = len - 1;
	while(s1[count] && ft_strchr(set,s1[count]))
		count++;
	while(s1[step] && ft_strchr(set,s1[step]) && step > count)
		step--;
	str = (char *)malloc(sizeof(char)*(step - count + 1));
	if(str)
		ft_strlcpy(str,&s1[count],(step-count + 1));
	return(str);
}
