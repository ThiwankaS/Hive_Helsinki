#include <stdio.h>
#include <stdlib.h>
#include "ft_number.h"

char *ft_only_number(char *str)
{
	int count;
	int iterator;
	char *result;
	int size = ft_strlen(str);

	count = 0;
	iterator = 0;
	result = (char *) malloc(size * sizeof(char));
	while(*(str + iterator))
	{
		if(*(str + iterator ) >= '0' && *(str + iterator ) <= '9')
		{
			result[count] = str[iterator];
			count++;
		}
		iterator++;
	}
	return (result);
}

char *ft_only_alpha(char *str)
{
	int count;
	int iterator;
	char *result;
	int size = ft_strlen(str);

	count = 0;
	iterator = 0;
	result = (char *) malloc(size * sizeof(char));
	while(*(str + iterator))
	{
		if((*(str + iterator ) >= 'a' && *(str + iterator ) <= 'z')||(*(str + iterator ) >= 'A' && *(str + iterator ) <= 'Z'))
		{
			result[count] = str[iterator];
			count++;
		}
		iterator++;
	}
	return (result);
}

int main (void)
{
	FILE *directory;
	char number[40];
	char spelling[20];
	int i = 0;
	int j = 0;
	int buffer_size = 41;
	struct NumeralsData *data;

	directory = fopen("numbers.dict", "r+");

	if(!directory)
	{
		printf("Dict Error\n");
	}
	printf("Dict Load Successfull\n");

	data = (struct NumeralsData *) malloc((buffer_size + 1) * sizeof(t_num_data));

	while(fscanf(directory,"%s %s", number, spelling ) != EOF)
	{
		data[i].number = ft_only_number(number);
		data[i].numeral = ft_only_alpha(spelling);
		i++;
	}

	while(j < buffer_size)
	{
		printf("Number : %s : ", data[j].number);
		printf("Numeral : %s : \n", data[j].numeral);
		j++;
	}
	return (0);
}
