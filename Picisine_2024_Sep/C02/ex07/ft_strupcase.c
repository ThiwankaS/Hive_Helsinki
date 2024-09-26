/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:53:08 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/12 19:17:39 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
	{
		if (*(str + count) >= 'a' && *(str + count) <= 'z')
			*(str + count) -= 32;
		count++;
	}
	return (str);
}
