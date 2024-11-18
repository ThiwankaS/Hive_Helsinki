/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:51:56 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/18 11:12:26 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	buffer;
	void	*ptr;

	buffer = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if (buffer / nmemb != size)
		return (NULL);
	ptr = malloc(buffer);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, buffer);
	return (ptr);
}
