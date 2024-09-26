/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handlers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopatin <vlopatin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:06:36 by vlopatin          #+#    #+#             */
/*   Updated: 2024/09/22 20:26:59 by vlopatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"
#include <unistd.h>
#include <stdlib.h>

int	can_resolve_number(t_num_data *data, char *nbr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nbr[j])
		j++;
	while (data[i].length_number)
		i++;
	if (j > data[i - 1].length_number)
		return (1);
	return (0);
}

t_num_data	*handle_read_error(t_num_data *data)
{
	write(2, "Dict Error\n", 11);
	free(data);
	return (NULL);
}
