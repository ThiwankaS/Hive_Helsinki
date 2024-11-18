/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 21:32:11 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/11 15:58:38 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}
