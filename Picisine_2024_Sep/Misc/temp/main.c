/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:13:35 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 20:38:54 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ft_number.h"

int	main(int argc, char *argv[])
{
	char	*input_number;
	char	*dictionary_name;

	if (argc < 2 || argc > 3)
	{
		return (1);
	}
	if (argc == 2)
	{
		input_number = argv[1];
		dictionary_name = "numbers.dict";
		print_number(dictionary_name, input_number);
	}
	else if (argc == 3)
	{
		dictionary_name = argv[2];
		input_number = argv[1];
		print_number(dictionary_name, input_number);
	}
	return (0);
}
