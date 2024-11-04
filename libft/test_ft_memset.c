#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "libft.h"

void test_function_str(void *test_case, int param, unsigned int size, void *expected_result, void *(*func)(void *str, int param, unsigned int size))
{
	void *actual_result = func(test_case, param, size);
	if (strcmp((char *)actual_result, (char *)expected_result) == 0)
	{
		printf("Test case: %s \033[37;42mPassed.\033[0m\n", (char *)test_case);
		printf("\t- Expected: %s\n\t- Got:      %s\n", (char *)test_case, (char *)actual_result);
	}
	else
	{
		printf("Test case: %s \033[37;41mFailed.\033[0m\n", (char *)test_case);
		printf("\t- Expected: %s\n\t- Got:      %s\n", (char *)test_case, (char *)actual_result);
	}
}

int main(void)
{
	char s1[15] = "Hive Helsinki";
	char r1[15] = "aave Helsinki";
	char s2[15] = "Hello Helsinki";
	char s3[15] = "Hello Helsinki";
	char *r2 = memset(s3,200,2);
    printf("functional testing : ft_memset \n");
    printf("--------------------------------\n");
    test_function_str(s1, 'a', 2, r1, ft_memset);
	test_function_str(s2, 200, 2, r2, ft_memset);
    return (0);
}
