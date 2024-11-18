/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_characters.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopatin <vlopatin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 20:00:54 by vlopatin          #+#    #+#             */
/*   Updated: 2024/09/22 20:26:31 by vlopatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"
#include <unistd.h>
#include <stdlib.h>

void	process_character(char c, t_state *state, t_num_data *data)
{
	if (c == ' ' || c == ':')
	{
		if (state->is_number == 1)
			data[state->i].number[state->j] = '\0';
		state->j = 0;
		state->is_number = 0;
	}
	else if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z'))
	{
		if (state->is_number == 1)
			data[state->i].number[state->j++] = c;
		else
			data[state->i].numeral[state->j++] = c;
	}
	else if (c == '\n')
	{
		if (ft_end_of_line(data, &state->is_number, &state->i, &state->j) == 1)
			return ;
	}
}

int	ft_end_of_line(t_num_data *data, int *is_number, int *i, int *j)
{
	data[*i].numeral[*j] = '\0';
	data[*i].length_number = ft_strlen(data[*i].number);
	data[*i].book_mark = 1;
	(*i)++;
	if (*i >= MAX_BUFFER_SIZE)
	{
		write(1, "Warning: Max entries reached\n", 29);
		return (1);
	}
	*is_number = 1;
	*j = 0;
	return (0);
}
