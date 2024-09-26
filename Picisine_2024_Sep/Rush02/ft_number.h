/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:25:35 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 20:09:10 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBER_H
# define FT_NUMBER_H

# include <stdio.h>

# define END 0
# define MID 1
# define BUFFER_SIZE 41

typedef struct NumeralsData
{
	char	*number;
	char	*numeral;
	int		length_number;
	int		book_mark;
}	t_num_data;

typedef struct Digit
{
	char	nbr;
	int		index;
	int		length;
	int		book_mark;
}	t_digit;

int			ft_strlen(char *str);
t_num_data	*loading_data(FILE *directory);
t_digit		*loading_digits(char *input_number);
char *final_numeral(t_num_data *data, t_digit *digits, char *result);
char *ft_number_string(char c1, char c2, int size);
char *get_prefix(t_num_data *data, char  nbr, int length);
char *get_range(t_num_data *data, char  nbr, int length);
int	ft_strcmp(char *s1, char *s2);
char *get_two_digit(t_num_data *data,t_digit *digits, char  nbr, int *index);
char *get_last_digit(t_num_data *data, t_digit *digits, char  nbr, int *index);
char *three_digit_number(t_num_data *data, t_digit *digits, char *result);

#endif
