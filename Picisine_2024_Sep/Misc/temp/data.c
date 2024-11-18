/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopatin <vlopatin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:27:21 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 20:23:49 by vlopatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"
#include <unistd.h>
#include <stdlib.h>

t_num_data	*loading_data(int file_descriptor)
{
	t_num_data	*data;

	data = (t_num_data *) malloc(MAX_BUFFER_SIZE * sizeof(t_num_data));
	if (data == NULL)
	{
		write(2, "Memory allocation failed\n", 25);
		close(file_descriptor);
		return (NULL);
	}
	data = ft_read_and_store(file_descriptor, data);
	if (data == NULL)
		return (NULL);
	close(file_descriptor);
	return (data);
}

t_num_data	*ft_read_and_store(int file_descriptor, t_num_data *data)
{
	char	c;
	t_state	state;
	ssize_t	bytes_read;

	state.is_number = 1;
	state.i = 0;
	state.j = 0;
	bytes_read = read(file_descriptor, &c, 1);
	while (bytes_read > 0)
	{
		if (state.i >= MAX_ENTRIES)
		{
			write(2, "Dict Error: Too many entries\n", 29);
			return (NULL);
		}
		process_character(c, &state, data);
		bytes_read = read(file_descriptor, &c, 1);
	}
	if (bytes_read == -1)
		return (handle_read_error(data));
	if (state.i > 0)
		data[state.i - 1].book_mark = 0;
	return (data);
}
