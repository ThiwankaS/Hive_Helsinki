/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 09:59:27 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/16 17:27:01 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		count;
	int		step;
	char	*result;

	step = 0;
	count = 0;
	result = 0;
	if (to_find[step] == '\0')
		result = str;
	while (str[count] != '\0')
	{
		while (str[count + step] == to_find[step] && str[count + step] != '\0')
		{
			step++;
		}
		if (to_find[step] == '\0')
		{
			result = str + count;
			break ;
		}
		count++;
		step = 0;
	}
	return (result);
}

/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char s1[] = "This is the main string use to find the sub string!";
	char s2[] = "This is the main string use to fin find the sub string!";
	char s3[] = "This is the main string use to find find the sub string!";
	char s4[] = "This is the main string use to fin the sub string!";
	char s5[] = "find";
	char s6[] = "";
	char *r1 = strstr(s1,s5);
	char *r2 = strstr(s2,s5);
	char *r3 = strstr(s3,s5);
	char *r4 = strstr(s4,s5);
	char *r5 = strstr(s1,s6);
	char *r6 = ft_strstr(s1,s5);
	char *r7 = ft_strstr(s2,s5);
	char *r8 = ft_strstr(s3,s5);
	char *r9 = ft_strstr(s4,s5);
	char *r10 = ft_strstr(s1,s6);
	printf("Result 1   : %s\n",r1);
	printf("Result 1.1 : %s\n",r6);
	printf("Result 2   : %s\n",r2);
	printf("Result 2.1 : %s\n",r7);
	printf("Result 3   : %s\n",r3);
	printf("Result 3.1 : %s\n",r8);
	printf("Result 4   : %s\n",r4);
	printf("Result 4.1 : %s\n",r9);
	printf("Result 5   : %s\n",r5);
	printf("Result 5.1 : %s\n",r10);
	return (0);
}*/
