/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:51:18 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/24 12:22:25 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src, int *writing_point)
{
	int	count;
	int	length;

	length = *writing_point;
	count = 0;
	while (*(src + count))
	{
		*(dest + length + count) = *(src + count);
		count++;
	}
	*writing_point = length + count;
	return (dest);
}

int	calculate_lenght(int size, char **strs, int sep)
{
	int	length;
	int	iterator;

	length = 0;
	iterator = 0;
	while (iterator < size)
	{
		length = length + ft_strlen(strs[iterator]);
		iterator ++;
	}
	return (length + (sep * (size - 1)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		length;
	int		step;
	int		lenght_sep;
	int		writing_point;

	step = 0;
	lenght_sep = ft_strlen(sep);
	length = calculate_lenght(size, strs, lenght_sep);
	writing_point = 0;
	str = malloc((length + 1) * sizeof(char));
	if (size == 0)
	{
		str = ft_strcat(str, "", &writing_point);
	}
	while (step < size)
	{
		str = ft_strcat(str, strs[step], &writing_point);
		if (step < (size - 1))
			str = ft_strcat(str, sep, &writing_point);
		step++;
	}
	return (str);
}


int main (void)
{
	char **strs = (char **)malloc(4 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 15);
	strs[1] = (char *)malloc(sizeof(char) * 15);
	strs[2] = (char *)malloc(sizeof(char) * 15);
	strs[3] = (char *)malloc(sizeof(char) * 15);
	strs[0] = "Eat";
	strs[1] = "Code";
	strs[2] = "Play";
	strs[3] = "Sleep";

	//char strs[4][6] = {{"Eat"},{"Code"},{"Play"},{"Sleep"}};
	char *sep = " and ";
	char *result = ft_strjoin(4, strs, sep);
	printf("Final length : %d\n", ft_strlen(result));
	printf("%s\n", result);
	return (0);
}
