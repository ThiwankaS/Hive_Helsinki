#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str1[15] = "Hive Helsinki";
	int arr[5] = {1,2,3,4,5};
	//ft_bzero(str1,2);
	//printf("own library funtion : %s\n",str1);
	for(int i = 0; i < 5;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n");
	ft_bzero(arr,sizeof(arr));
	for(int i = 0; i < 5;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n");
    return (0);
}
