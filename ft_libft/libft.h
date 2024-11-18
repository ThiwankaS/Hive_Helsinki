/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:40:52 by tsomacha          #+#    #+#             */
/*   Updated: 2024/11/16 16:47:48 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
int		ft_isalpha(long int param);
int		ft_isdigit(long int param);
int		ft_isalnum(long int param);
int		ft_isascii(long int param);
int		ft_isprint(long int param);
int		ft_toupper(long int param);
int		ft_tolower(long int param);

char	*ft_itoa(int n);
char	*ft_strdup(const char *s);
char	*ft_strrchr(const char *s, int c);
char	**ft_split(char const *str, char c);
char	*ft_strchr(const char *str, int param);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *big, const char *littel, size_t n);

void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	*ft_bzero(void *s, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t size);
void	*ft_memchr(const void *s, int c, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t size);

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));

int		ft_lstsize(t_list *lst);

#endif
