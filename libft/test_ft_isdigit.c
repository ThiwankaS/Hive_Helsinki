#include <stdio.h>
#include <limits.h>
#include "libft.h"

void test_function(int test_case, int expected_result, int (*func)(int))
{
    int actual_result = func(test_case);
    if (actual_result == expected_result)
    {
        printf("Test case: %d \033[37;42mPassed.\033[0m\n", test_case);
        printf("\t- Expected: %d\n\t- Got:      %d\n", expected_result, actual_result);
    }
    else
    {
        printf("Test case: %d \033[37;41mFailed.\033[0m\n", test_case);
        printf("\t- Expected: %d\n\t- Got:      %d\n", expected_result, actual_result);
    }
}

int main(void)
{
    printf("functional testing : ft_isdigit \n");
    printf("--------------------------------\n");
    test_function('0', 1, ft_isdigit);
    test_function('8', 1, ft_isdigit);
    test_function('9', 1, ft_isdigit);
    test_function('2', 1, ft_isdigit);
    test_function('@', 0, ft_isdigit);
    test_function('A', 0, ft_isdigit);
    test_function('*', 0, ft_isdigit);
    test_function(INT_MAX, 0, ft_isdigit);
    test_function(INT_MIN, 0, ft_isdigit);
    return (0);
}
