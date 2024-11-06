/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:40:52 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/06 18:08:26 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT
#define FT_LIBFT

#include <stdlib.h>

int	ft_atoi(const char *str);
int ft_isalpha(long int param);
int ft_isdigit(long int param);
int ft_isalnum(long int param);
int ft_isascii(long int param);
int ft_isprint(long int param);
int ft_toupper(long int param);
int ft_tolower(long int param);

char	*ft_strrchr(const char *s, int c);
char	*ft_strchr(const char *str, int param);
char	*ft_strnstr(const char *big, const char *littel, size_t n);

void	*ft_bzero(void *s, size_t size);
void	*ft_memset(void *s, int c, size_t size);
void	*ft_memchr(const void *s, int c, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

size_t ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	ft_memcmp(const void *s1, const void *s2, size_t n);
int ft_strncmp(const char *str1, const char *str2, size_t size);

#endif
