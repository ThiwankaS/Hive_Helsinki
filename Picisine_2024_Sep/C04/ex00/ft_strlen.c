/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:48:32 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/16 12:53:51 by tsomacha         ###   ########.fr       */
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

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[30] = "C langauge is awosome!";
	int		length1 = strlen(s1);
	int		length2 = ft_strlen(s1);
	printf("Length1 : %d\n",length1);
	printf("Length2 : %d\n",length2);
	return (0);
}*/
