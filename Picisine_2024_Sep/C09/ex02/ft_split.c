/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:24:47 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/25 19:52:07 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] + '\0')
	{
		if (c == charset[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	get_parameters(char *str, char *charset, int *max)
{
	int	count;
	int	length;
	int	streak;

	count = 0;
	length = 0;
	streak = 0;
	while (str[length] != '\0')
	{
		if (is_charset(str[length], charset))
		{
			count++;
			if (streak > *max && streak > 0)
				*max = streak;
			streak = 0;
		}
		else
		{
			streak++;
		}
		length++;
	}
	if (streak > *max && streak > 0)
		*max = streak;
	return (count);
}

char	*split_str(char *str, char *charset, int max, int *count)
{
	int		step;
	int		i;
	char	*string;

	i = *count;
	while (is_charset(str[i], charset) && str[i] != '\0')
		i++;
	string = (char *)malloc((max + 1) * sizeof(char));
	if (!string)
		return ((char *)0);
	step = 0;
	while (!is_charset(str[i], charset) && str[i] != '\0')
	{
		string[step] = str[i];
		i++;
		step++;
	}
	*count = i;
	string[step] = '\0';
	return (string);
}

char	**ft_strsplit(char *str, char *charset)
{
	int		max;
	int		length;
	int		iterator;
	char	**result;
	int		count;

	max = 0;
	count = 0;
	iterator = 0;
	length = get_parameters(str, charset, &max);
	result = (char **) malloc((length + 2) * sizeof(char *));
	if (!result)
		return ((char **)0);
	while ((iterator < length + 1))
	{
		result[iterator] = split_str(str, charset, max, &count);
		iterator++;
	}
	result[iterator] = (char *) malloc((max + 1) * sizeof(char));
	result[iterator][0] = 0;
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
    char str[] = "One$Two#Three&Four";
    char charset[] = "&#$";
    char **temp = ft_strsplit(str, charset);
	int count = 0;
	while(temp[count][0]!= 0)
	{
        printf("%s\n", temp[count]);
		count++;
    }
	free(temp);
    return 0;
}*/
