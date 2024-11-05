#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include "libft.h"

void print_array(int *arr,int size)
{
	for(int i = 0;i < size; i++)
	{
		printf("%d, ",arr[i]);
	}
	printf("\n");
}

int check_identical(int *arr1,int *arr2, int size)
{
	for (int i = 0; i < size; i++) {
        if (arr1[i] != arr2[i]) {
            return 0; // Arrays are not equal
        }
    }
    return 1; // Arrays are equal
}

int main(void)
{
	int arr1[10];
	int arr2[10];
	print_array(arr1,10);
	printf("--------------------------------------\n");
	memset(arr1,1,sizeof(arr1));//original function
	print_array(arr1,10);
	printf("--------------------------------------\n");

	print_array(arr2,10);
	ft_memset(arr2,1,sizeof(arr2));//libft function
	printf("--------------------------------------\n");
	print_array(arr2,10);
	if(check_identical(arr1,arr2,10)==1)
	{
		printf("Test case: \033[37;42mPassed.\033[0m\n");
	}
	else
	{
		printf("Test case: \033[37;41mFailed.\033[0m\n");
	}
	return (0);
}
