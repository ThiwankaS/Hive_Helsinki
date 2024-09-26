/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:27:59 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/12 19:55:40 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char *str)
{
	int	check;

	check = 0;
	if (*str >= 'a' && *str <= 'z')
	{
		check = 1;
	}
	return (check);
}

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

char	*ft_strcapitalize(char *str)
{
	int	flag;

	flag = 1;
	ft_strlowcase(str);
	while (*str)
	{
		if (ft_isalpha(str))
		{
			if (flag)
				*str -= 32;
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		str++;
	}
	return (str);
}
