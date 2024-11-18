/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   work.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:41:33 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 23:10:51 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"

char	*single_digit(t_num_data *data, t_digit *digits)
{
	int		count;
	char	*result;

	count = 0;
	result = (char *)0;
	while (data[count].book_mark != 0)
	{
		if (digits[0].nbr == data[count].number[0]
			&& data[count].length_number == 1)
		{
			result = data[count].numeral;
			break ;
		}
		count++;
	}
	return (result);
}

char	*double_digit(t_num_data *data, t_digit *digits)
{
	char	*result;

	result = (char *)0;
	if (digits[0].nbr == 1)
		result = below_twenty(data, digits);
	return (result);
}

char	*below_twenty(t_num_data *data, t_digit *digits)
{
	int		count;
	char	*result;

	result = (char *)0;
	count = 0;
	while (data[count].book_mark != 0)
	{
		if (digits[0].nbr == data[count].number[0]
			&& data[count].length_number == 2)
		{
			result = data[count].numeral;
			break ;
		}
		count++;
	}
	return (result);
}
