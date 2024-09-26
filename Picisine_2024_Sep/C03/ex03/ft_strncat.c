/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 10:43:47 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/16 17:26:58 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
	{
		count++;
	}
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	count;
	int	length;

	count = 0;
	length = ft_strlen(dest);
	while (*(src + count) && nb)
	{
		*(dest + length + count) = *(src + count);
		count++;
		nb--;
	}
	*(dest + length + count) = '\0';
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char s1[] = "ABCD ";
	char s2[] = "DEFG";
	char s3[] = "ABCD ";
	char s4[] = "DEFG";
	char s6[] = "ABCD ";
	char s7[] = "DEFG";
	char s8[] = "ABCD ";
	char s9[] = "DEFG";
	char s10[] = "ABCD ";
	char s11[] = "DEFG";
	char s13[] = "ABCD ";
	char s14[] = "DEFG";

	strncat(s1,s2,3);
	printf("Test 01 : %s\n",s1);
	printf("Length : %ld\n",strlen(s1));

	ft_strncat(s3,s4,3);
	printf("Test 02 : %s\n",s3);
	printf("Length : %ld\n",strlen(s3));

	char *s5 = ft_strncat(s6,s7,3);
	printf("Test 03 : %s\n",s5);
	printf("Length : %ld\n",strlen(s5));

	strncat(s8,s9,6);
	printf("Test 04 : %s\n",s8);
	printf("Length : %ld\n",strlen(s8));

	ft_strncat(s10,s11,6);
	printf("Test 05 : %s\n",s10);
	printf("Length : %ld\n",strlen(s10));

	char *s12 = ft_strncat(s13,s14,6);
	printf("Test 06 : %s\n",s12);
	printf("Length : %ld\n",strlen(s12));
	return (0);
}*/
