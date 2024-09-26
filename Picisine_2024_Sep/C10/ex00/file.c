/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:34:30 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/24 12:33:44 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

void	error_log(char *str)
{
	int	length;
	int	fd;

	length = ft_strlen(str);
	fd = open("log.txt", O_RDWR | O_CREAT | O_APPEND);
	fd = write(fd, str, length);
	close(fd);
}
