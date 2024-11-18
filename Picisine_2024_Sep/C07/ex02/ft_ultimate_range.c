/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:44:36 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/19 14:48:02 by tsomacha         ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;

	if (min >= max)
	{
		*range = (int *)0;
		return (0);
	}
	result = ft_range(min, max);
	if (!result)
	{
		*range = (int *)0;
		return (-1);
	}
	else
	{
		*range = result;
		return (max - min);
	}
}

/*
#include <stdio.h>
int main (void)
{
	int min = 10;
	int max = 20;
	int length;
	int i;
	int *range;


	i = 0;
	length = ft_ultimate_range(&range, min, max);
	printf("Lenght : %d\n", length);
	while(i  < length)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
