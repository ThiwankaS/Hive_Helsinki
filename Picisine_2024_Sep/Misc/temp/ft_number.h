/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 20:25:35 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/22 22:50:44 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBER_H
# define FT_NUMBER_H

# include <stdio.h>

# define BUFFER_SIZE 41
# define MAX_ENTRIES 1000
# define MAX_BUFFER_SIZE 10000
# define END 0
# define MID 1

typedef struct NumeralsData
{
	char	number[50];
	char	numeral[50];
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

typedef struct RunningNumbers
{
	int		is_number;
	int		i;
	int		j;
}	t_state;

int			can_resolve_number(t_num_data *data, char *nbr);
int			ft_strlen(char *str);
int			ft_end_of_line(t_num_data *data, int *is_number, int *i, int *j);
t_num_data	*ft_read_and_store(int file_descriptor, t_num_data *data);
t_num_data	*open_directory(char *dictionary_name);
t_num_data	*handle_read_error(t_num_data *data);
t_num_data	*loading_data(int file_descriptor);
t_digit		*loading_digits(char *input_number);
void		process_character(char c, t_state *state, t_num_data *data);
void		print_number(char *dictionary_name, char *input_number);
char		*build_str(t_num_data *data, t_digit *digits, char *input_number);
char		*single_digit(t_num_data *data, t_digit *digits);
char		*double_digit(t_num_data *data, t_digit *digits);
char		*below_twenty(t_num_data *data, t_digit *digits);

#endif
