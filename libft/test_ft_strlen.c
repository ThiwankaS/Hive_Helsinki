#include <stdio.h>
#include <limits.h>
#include "libft.h"

void test_function(char *test_case, int expected_result, unsigned int (*func)(const char *str))
{
    int actual_result = func(test_case);
    if (actual_result == expected_result)
    {
        printf("Test case: %s \033[37;42mPassed.\033[0m\n", test_case);
        printf("\t- Expected: %d\n\t- Got:      %d\n", expected_result, actual_result);
    }
    else
    {
        printf("Test case: %s \033[37;41mFailed.\033[0m\n", test_case);
        printf("\t- Expected: %d\n\t- Got:      %d\n", expected_result, actual_result);
    }
}

int main(void)
{
    printf("functional testing : ft_strlen \n");
    printf("--------------------------------\n");
    test_function("Hello", 5, ft_strlen);
    test_function("Hello World!", 12, ft_strlen);
    test_function("Hive_Helsinki", 13, ft_strlen);
    test_function("", 0, ft_strlen);
    return (0);
}