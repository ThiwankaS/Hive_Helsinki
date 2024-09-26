/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:27:29 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/11 15:56:26 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}
