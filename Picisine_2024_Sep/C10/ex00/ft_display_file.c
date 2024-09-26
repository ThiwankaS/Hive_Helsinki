/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:54:18 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/24 12:32:54 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

int	display_content(char *str)
{
	int		bufer_size;
	int		fd;
	int		rd;
	char	buffer[500];

	bufer_size = 500;
	fd = 0;
	rd = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		error_log("Error occucred oppening file\n");
	else
	{
		rd = read(fd, buffer, bufer_size);
		buffer[bufer_size] = '\0';
	}
	if (rd == -1)
		error_log("Error occucred reading file\n");
	else
		ft_printstr(buffer);
	close(fd);
	return (0);
}

int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 1)
	{
		ft_printstr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_printstr("Too many arguments.\n");
		return (0);
	}
	if (argc == 2)
	{
		result = display_content(argv[1]);
		if (result == -1)
		{
			ft_printstr("Cannot read file.\n");
		}
	}
	return (0);
}
