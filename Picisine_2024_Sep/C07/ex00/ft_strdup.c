/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 08:11:31 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/23 15:00:01 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strdup(char *src)
{
	int		length;
	int		count;
	char	*cpy;

	length = ft_strlen(src);
	count = 0;
	cpy = malloc(length * sizeof(char));
	while (*(src + count))
	{
		*(cpy + count) = *(src + count);
		count++;
	}
	*(cpy + count) = '\0';
	return (cpy);
}


#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src1[] = "Here is the string!";
	char	src2[] = "";
	char	*ptr1 = strdup(src1);
	char	*cpy1 = ft_strdup(src1);
	char	*ptr2 = strdup(src2);
	char	*cpy2 = ft_strdup(src2);
	printf("Test 01 :- \n");
	printf("src 01 : %s\n",src1);
	printf("length (src1) : %ld\n",strlen(src1));
	printf("ptr 01 : %s\n",ptr1);
	printf("length (ptr1) : %ld\n",strlen(ptr1));
	printf("ptr 02 : %s\n",cpy1);
	printf("length (cpy1) : %ld\n",strlen(cpy1));

	printf("Test 02 :- \n");
	printf("src 02 : %s\n",src2);
	printf("length (src2) : %ld\n",strlen(src2));
	printf("ptr 02 : %s\n",ptr2);
	printf("length (ptr2) : %ld\n",strlen(ptr2));
	printf("ptr 02 : %s\n",cpy2);
	printf("length (cpy2) : %ld\n",strlen(cpy2));
	return (0);
}
