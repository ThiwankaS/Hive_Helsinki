/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:57:00 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/11 15:50:45 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	flag;

	flag = 1;
	while (*str)
	{
		if (!((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z')))
		{
			flag = 0;
			break ;
		}
		str++;
	}
	return (flag);
}
