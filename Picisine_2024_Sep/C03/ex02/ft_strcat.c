/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 10:29:15 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/16 17:26:55 by tsomacha         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	length;

	count = 0;
	length = ft_strlen(dest);
	while (*(src + count))
	{
		*(dest + length + count) = *(src + count);
		count++;
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

	strcat(s1,s2);
	printf("Test : %s\n",s1);
	printf("Length : %ld\n",strlen(s1));

	ft_strcat(s3,s4);
	printf("Test : %s\n",s3);
	printf("Length : %ld\n",strlen(s3));

	char *s5 = ft_strcat(s6,s7);
	printf("Test : %s\n",s5);
	printf("Length : %ld\n",strlen(s5));
	return (0);
}
*/
