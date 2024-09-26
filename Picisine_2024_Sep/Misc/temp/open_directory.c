/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_directory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlopatin <vlopatin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:53:02 by vlopatin          #+#    #+#             */
/*   Updated: 2024/09/22 18:41:44 by vlopatin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_number.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

t_num_data	*open_directory(char *dictionary_name)
{
	t_num_data	*data;
	int			file_descriptor;

	file_descriptor = open(dictionary_name, O_RDONLY);
	if (file_descriptor == -1)
	{
		write(2, "Dict Error\n", 11);
		return (NULL);
	}
	data = loading_data(file_descriptor);
	if (data == NULL)
	{
		close(file_descriptor);
		return (NULL);
	}
	close(file_descriptor);
	return (data);
}
