#include <stdio.h>
#include <stdlib.h>

typedef struct Digit
{
	char	nbr;
	int		index;
}	digit;

int ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

struct Digit *ft_find_digits(char *number)
{
	int	length;
	int	iterator;

	length = ft_strlen(number);
	digit *digits = (digit *) malloc((length + 1) * sizeof(struct Digit));
	iterator = 0;
	while(iterator < length)
	{
		digits[iterator].nbr = number[iterator];
		digits[iterator].index = length - iterator - 1;
		iterator++;
	}
	digits[iterator].nbr = 'P';
	return (digits);
}

int main (int argc, char *argv[])
{
	char *number;
	char *directory;
	digit *temp;
	int i = 0;
	if(argc == 2)
	{
		number = argv[1];
		printf("Number entered : %s\n",number);
		temp = ft_find_digits(number);
	}
	else if(argc == 3)
	{
		directory = argv[1];
		number = argv[2];
		printf("Number entered : %s\n",number);
		printf("Directory name entered : %s\n",directory);
	}
	while(temp[i].nbr != 'P' )
	{
		printf(" digit %c @ %d \n",temp[i].nbr,temp[i].index);
		i++;
	}
	return (0);
}
