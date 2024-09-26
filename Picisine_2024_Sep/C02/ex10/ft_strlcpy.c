/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:14:44 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/12 19:09:13 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;

	length = 0;
	while (*(src + length) && 0 < size)
	{
		*(dest + length) = *(src + length);
		length++;
		size--;
	}
	*(dest + length) = '\0';
	while (*(src + length))
	{
		length++;
	}
	return (length);
}
