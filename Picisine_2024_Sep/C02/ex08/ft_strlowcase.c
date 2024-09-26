/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 19:55:11 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/12 19:17:25 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (*(str + count))
	{
		if (*(str + count) >= 'A' && *(str + count) <= 'Z')
			*(str + count) += 32;
		count++;
	}
	return (str);
}
