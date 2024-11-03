#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include "libft.h"

void test_function(int test_case, int (*func)(int)) {
    int	actual_result = func(test_case);
	int	expected_result = 0;//isalpha(test_case);
    if (actual_result == expected_result) {
        printf("Test case %d passed.\n", test_case);
    } else {
        printf("Test case %d failed. Expected %d, got %d.\n", test_case, expected_result, actual_result);
    }
}

int main (void)
{
	test_function(INT_MIN, ft_isalpha);
	//printf("%d \n",isalpha(INT_MAX));
	return (0);
}
