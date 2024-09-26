/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:26:49 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/12 08:33:13 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	step;

	count = 0;
	step = 0;
	while (count < size)
	{
		step = count + 1;
		while (step < size)
		{
			if (tab[count] > tab[step])
			{
				ft_swap(&tab[count], &tab[step]);
			}
			step++;
		}
		count++;
	}
}
