/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:24:55 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/04 16:24:57 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str1, const char *str2, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while ((*(str1 + count) || *(str2 + count)) && (count < size))
	{
		if (*(str1 + count) != *(str2 + count))
		{
			return (*(str1 + count) - *(str2 + count));
		}
		count++;
	}
	return (0);
}
