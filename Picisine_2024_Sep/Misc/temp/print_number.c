/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:55:09 by vlopatin          #+#    #+#             */
/*   Updated: 2024/09/22 22:52:41 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	print_number(char *dictionary_name, char *input_number)
{
	t_num_data	*data;
	t_digit		*digits;
	char		*result;

	data = open_directory(dictionary_name);
	if (data == NULL)
		return ;
	if (can_resolve_number(data, input_number))
	{
		write(2, "Dict Error\n", 11);
		free(data);
		return ;
	}
	digits = loading_digits(input_number);
	result = build_str(data, digits, input_number);
	printf("%s\n", result);
	free(data);
	free(digits);
	return ;
}
