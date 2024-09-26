/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:38:49 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/16 17:26:42 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (*(s1 + count) == *(s2 + count) && *((s1 + count)))
	{
		count++;
	}
	return ((*(s1 + count) - *(s2 + count)));
}

/*
#include <stdio.h>
#include <string.h>

int main (void)
{
	char s1[] = "ABCD";
	char s2[] = "ABCD";
	char s3[] = "Ynk";
	char s4[] = "ABCDE";
	char s5[] = "ABCd";
	char s6[] = "";
	char s7[] = "";
	printf("Test 01 : %d\n",strcmp(s1,s2));
	printf("Test 01 : %d\n",ft_strcmp(s1,s2));
	printf("Test 02 : %d\n",strcmp(s1,s3));
	printf("Test 02 : %d\n",ft_strcmp(s1,s3));
	printf("Test 03 : %d\n",strcmp(s1,s4));
	printf("Test 03 : %d\n",ft_strcmp(s1,s4));
	printf("Test 04 : %d\n",strcmp(s1,s5));
	printf("Test 04 : %d\n",ft_strcmp(s1,s5));
	printf("Test 05 : %d\n",strcmp(s1,s6));
	printf("Test 05 : %d\n",ft_strcmp(s1,s6));
	printf("Test 06 : %d\n",strcmp(s6,s7));
	printf("Test 06 : %d\n",ft_strcmp(s6,s7));
	printf("Test 07 : %d\n",strcmp(s7,s1));
	printf("Test 07 : %d\n",ft_strcmp(s7,s1));
	return (0);
}*/
