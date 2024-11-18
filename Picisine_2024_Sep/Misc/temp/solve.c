/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 21:29:16 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 22:42:44 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"

char	*build_str(t_num_data *data, t_digit *digits, char *input_number)
{
	int		lenght;
	char	*result;
	int		count;

	count = 0;
	result = (char *)0;
	lenght = ft_strlen(input_number);
	if (lenght == 1)
		result = single_digit(data, digits);
	else if (lenght == 2)
		result = double_digit(data, digits);
	return (result);
}
