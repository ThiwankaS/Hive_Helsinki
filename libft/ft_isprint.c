/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:21:54 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/04 16:22:04 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(long int param)
{
	if (param >= 32 && param <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
