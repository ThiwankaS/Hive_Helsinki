/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:40:43 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/12 09:13:10 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int length;

	length = 0;
	while (*(src + length) && length < size)
	{
		*(dest + length) = *(src + length);
		length++;
	}
	*(dest + length) = '\0';
	while (*(src + length))
	{
		length++;
	}
	return (length);
}

int	main(void)
{
	char	b[22] = "salut,_comment_tu_vas?";
	char	a[22];

	printf("Before : %s\n", b);
	printf("Before length: %ld\n", strlen(b));
	int n = ft_strlcpy(a, b, 15);
	printf("After  : %s\n", b);
	printf("After  : %s\n", a);
	printf("After length (b): %ld\n", strlen(b));
	printf("After length (a): %ld\n", strlen(a));
	printf("After length (return): %d\n",n);
	return (0);
}
