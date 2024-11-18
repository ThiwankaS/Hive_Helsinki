/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:27:21 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 13:03:11 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_number.h"

char	*ft_only_number(char *str)
{
	int		count;
	int		iterator;
	char	*result;
	int		size;

	count = 0;
	iterator = 0;
	size = ft_strlen(str);
	result = (char *) malloc(size * sizeof(char));
	while (*(str + iterator))
	{
		if (*(str + iterator) >= '0' && *(str + iterator) <= '9')
		{
			result[count] = str[iterator];
			count++;
		}
		iterator++;
	}
	return (result);
}

char	*ft_only_alpha(char *str)
{
	int		count;
	int		iterator;
	char	*result;
	int		size;

	count = 0;
	iterator = 0;
	size = ft_strlen(str);
	result = (char *) malloc(size * sizeof(char));
	while (*(str + iterator))
	{
		if ((*(str + iterator) >= 'a' && *(str + iterator) <= 'z') || (*(str + iterator) >= 'A' && *(str + iterator) <= 'Z'))
		{
			result[count] = str[iterator];
			count++;
		}
		iterator++;
	}
	return (result);
}

t_num_data	*loading_data(FILE *directory)
{
	char		number[100];
	char		spelling[200];
	int			i;
	t_num_data	*data;

	i = 0;
	data = (t_num_data *) malloc((BUFFER_SIZE + 1) * sizeof(t_num_data));
	while (fscanf(directory, "%s %s", number, spelling) != EOF)
	{
		data[i].number = ft_only_number(number);
		data[i].numeral = ft_only_alpha(spelling);
		data[i].length_number = ft_strlen(data[i].number);
		data[i].book_mark = MID;
		i++;
	}
	data[i].book_mark = END;
	return (data);
}
