/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:25:17 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/19 21:57:24 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	count;

	count = 0;
	size = max - min;
	if (0 >= size)
		return ((int *)0);
	result = malloc (size * sizeof (int));
	while ((count + min) < max)
	{
		*(result + count) = min + count;
		count++;
	}
	return (result);
}

/*
#include <stdio.h>
int main (void)
{
	int min = 10;
	int max = 20;
	int i = 0;
	int *range = ft_range(min,max);

	while((i + min) < max)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
