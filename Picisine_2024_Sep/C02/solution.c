/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solution.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsomacha <tsomacha@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 20:40:43 by tsomacha          #+#    #+#             */
/*   Updated: 2024/09/13 11:17:33 by tsomacha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char *ft_strcapitalize(char *str)
{
	char *start;
	int flag;

	start = str;
	flag = 1;
	while (*str)
	{
		if (!(((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9')) && flag))
		{
			if(*start >= 'a' && *start <= 'z')
				*start -= 32;
			flag = 0;
		}
		if ((((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z') || (*str >= '0' && *str <= '9'))) && !flag)
		{
			start = str;
			flag = 1;
		}
		str++;
	}
	if (!*str && flag)
	{
			if(*start >= 'a' && *start <= 'z')
				*start -= 32;
			flag = 0;
	}

	return (str);
}

int	main(void)
{
	char	aaa[] = "        yyyu    9%hhh h&%hh  salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Before : %s\n", aaa);
	ft_strcapitalize(aaa);
	printf("After  : %s\n", aaa);
	return (0);
}

/*
step 01 : Starting point char(s)
step 02 : String pointer char(s)
step 03 : Check for char(s) if not aplha-numeric - false
step 04 : Increment the string pointer by 01
step 05 : Check for char(a) if not aplha-numeric - false
step 06 : Increment the string pointer by 01
step 07 : Check for char(l) if not aplha-numeric - false
step 08 : Increment the string pointer by 01
step 07 : Check for char(u) if not aplha-numeric - false
step 08 : Increment the string pointer by 01
step 07 : Check for char(t) if not aplha-numeric - false
step 08 : Increment the string pointer by 01
step 09 : Check for char(,) if not aplha-numeric - true
step 10 : Capitalized char(s)
step 11 : Increment the string pointer by 01
step 12 : Check for char( ) if not aplha-numeric - true
step 11 : Increment the string pointer by 01
step 13 : Check for char(c) if not aplha-numeric - false
step 14 : Set Starting point char(c)
step 15 : Increment the string pointer by 01
step 16 : Check for char(o) if not aplha-numeric - false
step 17 : Increment the string pointer by 01
step 18 : Check for char(m) if not aplha-numeric - false
step 19 : Increment the string pointer by 01
step 20 : Check for char(m) if not aplha-numeric - false
step 21 : Increment the string pointer by 01
step 22 : Check for char(e) if not aplha-numeric - false
step 23 : Increment the string pointer by 01
step 24 : Check for char(n) if not aplha-numeric - false
step 25 : Increment the string pointer by 01
step 26 : Check for char(t) if not aplha-numeric - false
step 27 : Increment the string pointer by 01
step 28 : Check for char( ) if not aplha-numeric - true
step 29 : Capitalized char(c)
step 30 : Increment the string pointer by 01
step 31 : Check for char(t) if not aplha-numeric - false
step 32 : Set Starting point char(t)
step 33 : Increment the string pointer by 01
step 34 : Check for char(u) if not aplha-numeric - false
step 35 : Increment the string pointer by 01
step 36 : Check for char( ) if not aplha-numeric - true
step 37 : Capitalized char(t)
step 38 : Increment the string pointer by 01
*/
