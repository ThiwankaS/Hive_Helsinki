/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digit.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:19:54 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 08:58:42 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_number.h"

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

t_digit *loading_digits(char *input_number)
{
	int	length;
	int	iterator;

	length = ft_strlen(input_number);
	t_digit *digits = (t_digit *) malloc((length + 1) * sizeof(t_digit));
	iterator = 0;
	while(iterator < length)
	{
		digits[iterator].nbr = input_number[iterator];
		digits[iterator].index = length - iterator - 1;
		digits[iterator].length = length;
		digits[iterator].book_mark = MID;
		iterator++;
	}
	digits[iterator].book_mark = END;
	return (digits);
}
