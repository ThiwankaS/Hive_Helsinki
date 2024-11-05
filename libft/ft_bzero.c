/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:06:11 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/05 18:48:57 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *s, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	count;

	ptr = (unsigned char *)s;
	count = 0;
	while (count < size)
	{
		*(ptr + count) = 0;
		count++;
	}
	return (s);
}
