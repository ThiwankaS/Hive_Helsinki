/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 09:00:01 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/17 09:17:44 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				result;

	count = 0;
	result = 0;
	while ((*(s1 + count) || *(s2 + count)) && count < n)
	{
		if (s1[count] != s2[count])
		{
			result = (s1[count]) - (s2)[count];
			break ;
		}
		count++;
	}
	return (result);
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
	printf("Test 01 : %d\n",strncmp(s1,s2,4));
	printf("Test 01 : %d\n",ft_strncmp(s1,s2,4));

	printf("Test 02 : %d\n",strncmp(s1,s3,4));
	printf("Test 02 : %d\n",ft_strncmp(s1,s3,4));

	printf("Test 03 : %d\n",strncmp(s1,s4,3));
	printf("Test 03 : %d\n",ft_strncmp(s1,s4,3));

	printf("Test 04 : %d\n",strncmp(s1,s5,4));
	printf("Test 04 : %d\n",ft_strncmp(s1,s5,4));

	printf("Test 05 : %d\n",strncmp(s1,s6,2));
	printf("Test 05 : %d\n",ft_strncmp(s1,s6,2));

	printf("Test 06 : %d\n",strncmp(s6,s7,1));
	printf("Test 06 : %d\n",ft_strncmp(s6,s7,1));

	int test = strncmp(s7,s1,2);

	printf("Test 07 : %d\n", test);
	printf("Test 07 : %d\n",ft_strncmp(s7,s1,2));
	return (0);
}
*/
