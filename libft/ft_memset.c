/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:54:26 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/04 19:22:45 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	count;

	ptr = (unsigned char *)s;
	count = 0;
	while (count < size)
	{
		*(ptr + count) = c;
		count++;
	}
	return (s);
}
