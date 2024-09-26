/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 08:33:14 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/21 13:01:40 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
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

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	write(1, str, length);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}

void ft_show_tab(struct s_stock_str *par)
{
	int j = 0;
	while(par[j].str != 0)
	{
		ft_putstr(par[j].str);
		ft_putstr("\n");
		ft_putnbr(par[j].size);
		ft_putstr("\n");
		ft_putstr(par[j].copy);
		ft_putstr("\n");
		j++;
	}
}

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
	struct s_stock_str *stk = ft_strs_to_tab(ac,av);
	while (i < ac)
	{
		printf("av[%d] : %s\n",i,av[i]);
		i++;
	}
	ft_show_tab(stk);
	return (0);
}
