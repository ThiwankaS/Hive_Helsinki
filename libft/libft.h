/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:40:52 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/03 13:30:58 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT
#define FT_LIBFT

int ft_isalpha(long int param);
int ft_isdigit(long int param);
int ft_isalnum(long int param);
int ft_isascii(long int param);
int ft_isprint(long int param);
int ft_toupper(long int param);
int ft_tolower(long int param);

unsigned int ft_strlen(const char *str);
const char *ft_strchr(const char *str, int param);

#endif