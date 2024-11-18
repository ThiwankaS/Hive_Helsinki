/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:49:26 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/17 16:07:06 by tsomacha         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	count;
	int	count_minus;
	int	result;

	count = 0;
	count_minus = 0;
	result = 0;
	while (*(str + count)
		&& ((str[count] >= 9 && str[count] <= 13) || str[count] == 32))
		count++;
	while (*(str + count) && ((str[count]) == '-' || (str[count]) == '+'))
	{
		if (str[count] == '-')
			count_minus++;
		count++;
	}
	while (*(str + count) && ((str[count]) >= 48 && (str[count]) <= 57))
	{
		result = (result * 10) + (str[count] - 48);
		count++;
	}
	if (count_minus % 2 == 1)
		result = result * (-1);
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "   ---+--+1234ab567";
	int a = ft_atoi(str);
	printf(" a : %d\n",a);
	return (0);
}*/
