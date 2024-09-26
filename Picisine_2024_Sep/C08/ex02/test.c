/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 08:50:48 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/20 12:32:32 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_abs.h"

int main(void)
{
	int nbr = 0;
	printf("Absolute value of %d is : %d\n", nbr, ABS(nbr));
	return (0);
}
