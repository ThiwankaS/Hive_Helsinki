/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:22:27 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/04 16:22:41 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char	*ft_strchr(const char *str, int param)
{
	while (*str)
	{
		if (*str == param)
		{
			return (str);
		}
		str++;
	}
	return ((char *)0);
}
