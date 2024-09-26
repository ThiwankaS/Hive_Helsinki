/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:29:53 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/11 16:20:55 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}
