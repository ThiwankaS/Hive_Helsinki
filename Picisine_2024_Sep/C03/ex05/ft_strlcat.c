/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:24:59 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/17 09:21:03 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter] != '\0' )
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	count;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
	{
		return (dest_len + src_len);
	}
	else
	{
		count = 0;
		while (src[count] != '\0' || count < (size - dest_len - 1))
		{
			dest[dest_len + count] = src[count];
			count++;
		}
		dest[dest_len + count] = '\0';
	}
	return (dest_len + src_len);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char s1[50] = "This_is_awsome_";//14
	char s2[10] = "and_fun!";//08
	char s3[50] = "This_is_awsome_";
	char s4[10] = "and_fun!";
	char s5[50] = "This_is_awsome_";
	char s6[10] = "and_fun!";
	char s7[50] = "This_is_awsome_";
	char s8[10] = "and_fun!";


	printf(" Before 	: %s\n",s1);
	unsigned int length1 = strlcat(s1, s2, 10);
	printf(" After 		: %s\n",s1);
	printf("Lenght1 	: %u\n",length1);

	printf(" Before 	: %s\n",s3);
	unsigned int length_ft1 = ft_strlcat(s3, s4, 10);
	printf(" After  	: %s\n",s3);
	printf("Lenght_ft1 	: %u\n\n",length_ft1);

	printf(" Before 	: %s\n",s5);
	unsigned int length2 = strlcat(s5, s6, 30);
	printf(" After  	: %s\n",s5);
	printf("Lenght2 	: %u\n",length2);

	printf(" Before 	: %s\n",s7);
	unsigned int length_ft2 = ft_strlcat(s7, s8, 30);
	printf(" After  	: %s\n",s7);
	printf("Lenght_ft2 	: %u\n",length_ft2);
	return (0);
}*/
