/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 08:33:14 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/21 10:21:56 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		length;
	int		count;
	char	*cpy;

	length = ft_strlen(src);
	count = 0;
	cpy = malloc(length * sizeof(char));
	while (*(src + count))
	{
		*(cpy + count) = *(src + count);
		count++;
	}
	*(cpy + count) = '\0';
	return (cpy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stocks;
	int			iterator;

	iterator = 0;
	stocks = (t_stock_str *) malloc((ac + 1) * sizeof(t_stock_str));
	if (!stocks)
	{
		return ((t_stock_str *)0);
	}
	while (iterator < ac)
	{
		stocks[iterator].size = ft_strlen(av[iterator]);
		stocks[iterator].str = av[iterator];
		stocks[iterator].copy = ft_strdup(av[iterator]);
		iterator++;
	}
	stocks[iterator].str = 0;
	return (stocks);
}

/*
#include <stdio.h>

int main (void)
{
	int ac = 5;
	char **av = (char **) malloc(ac * sizeof(char));
	av[0] = (char *) malloc(sizeof(char) * 10);
	av[1] = (char *) malloc(sizeof(char) * 10);
	av[2] = (char *) malloc(sizeof(char) * 10);
	av[3] = (char *) malloc(sizeof(char) * 10);
	av[4] = (char *) malloc(sizeof(char) * 10);
	av[0] = "APPL";
	av[1] = "AMZN";
	av[2] = "GGL";
	av[3] = "KONE";
	av[4] = "NVDA";
	int i = 0;
	int j = 0;
	t_stock_str *stk = ft_strs_to_tab(ac,av);
	while (i < ac)
	{
		printf("av[%d] : %s\n",i,av[i]);
		i++;
	}
	while(j < ac)
	{
		printf("stk[%d].size : %d\n",j,stk[j].size);
		printf("stk[%d].str : %s\n",j,stk[j].str);
		printf("stk[%d].copy : %s\n",j,stk[j].copy);
		j++;
	}
	return (0);
}*/
