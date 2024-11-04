#include <stdio.h>
#include <limits.h>
#include "libft.h"

void test_function(char test_case, char expected_result, int (*func)(long int param))
{
    int actual_result = func(test_case);
    if (actual_result == expected_result)
    {
        printf("Test case: %c \033[37;42mPassed.\033[0m\n", test_case);
        printf("\t- Expected: %c\n\t- Got:      %c\n", expected_result, actual_result);
    }
    else
    {
        printf("Test case: %c \033[37;41mFailed.\033[0m\n", test_case);
        printf("\t- Expected: %c\n\t- Got:      %c\n", expected_result, actual_result);
    }
}

int main(void)
{
    printf("functional testing : ft_tolower \n");
    printf("--------------------------------\n");
    test_function('H', 'h', ft_tolower);
    test_function('h', 'h', ft_tolower);
    test_function('9', '9', ft_tolower);
    return (0);
}