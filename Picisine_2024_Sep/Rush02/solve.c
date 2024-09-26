/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:01:49 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 20:28:12 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_number.h"

char *get_prefix(t_num_data *data, char  nbr, int length)
{
	char *str;
	int i = 0;
	while (data[i].book_mark != 0)
	{
		if(data[i].number[0] == nbr && data[i].length_number == 1)
		{
			str = data[i].numeral;
		}
		i++;
	}
	return (str);
}

char *get_range(t_num_data *data, char  nbr, int length)
{
	char *str;
	int i = 0;
	int flag = 0;
	while (data[i].book_mark != 0)
	{
		if(data[i].length_number == length)
		{
			str = data[i].numeral;
			flag = 1;
		}
		i++;
	}
	return (str);
}

char *get_two_digit(t_num_data *data,t_digit *digits, char  nbr, int *index)
{
	char *str;
	int i = 0;
	while (data[i].book_mark != 0)
	{
		if(data[i].number[0] == nbr && data[i].length_number == 2)
		{
			if(nbr == '1')
			{
				if(data[i].number[1] == digits[*index + 1].nbr)
				{
					printf("%s\n",data[i].numeral);
				}
			}
			else if(digits[*index + 1].nbr != 0)
			{
				printf("%s\n",data[i].numeral);
			}
		}
		i++;
	}
	return (str);
}

char *get_last_digit(t_num_data *data, t_digit *digits, char  nbr, int *index)
{
	char *str;
	int i = 0;
	if(nbr != '0')
	{
		while (data[i].book_mark != 0)
		{
			if(digits[*index - 1].nbr != '1')
			{
				if(data[i].number[0] == nbr && data[i].length_number == 1)
				{
					printf("%s\n",data[i].numeral);
				}
			}
			i++;
		}
	}
	else
	{
		if(digits[*index].length == 1)
		{
			while (data[i].book_mark != 0)
			{
				if(data[i].number[0] == nbr && data[i].length_number == 1)
				{
					printf("%s\n",data[i].numeral);
				}
				i++;
			}
		}
	}
	return (str);
}

