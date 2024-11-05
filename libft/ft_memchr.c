/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:49:38 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/05 18:53:24 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, unsigned int size)
{
	char	*str;
	unsigned int	count;

	count = 0;
	str = (char *)s;
	while (count < size)
	{
		if ((unsigned char)str[count] == (unsigned char)c)
			return ((char *)s + count);
		count++;
	}
	return ((char *)0);
}
