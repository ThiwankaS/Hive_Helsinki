#include <stdio.h>
#include <limits.h>
#include <string.h>
#include "libft.h"

void test_function(char *test_case, int param, char *expected_result, const char *(*func)(const char *str, int param))
{
    const char *actual_result = func(test_case, param);
    if (actual_result && expected_result)
    {
        if (strcmp(actual_result, expected_result) == 0)
        {
            printf("Test case: %s \033[37;42mPassed.\033[0m\n", test_case);
            printf("\t- Expected: %s\n\t- Got:      %s\n", expected_result, actual_result);
        }
        else
        {
            printf("Test case: %s \033[37;41mFailed.\033[0m\n", test_case);
            printf("\t- Expected: %s\n\t- Got:      %s\n", expected_result, actual_result);
        }
    }
    else
    {
        if (actual_result == expected_result)
        {
            printf("Test case: %s \033[37;42mPassed.\033[0m\n", test_case);
            printf("\t- Expected: %s\n\t- Got:      %s\n", expected_result, actual_result);
        }
        else
        {
            printf("Test case: %s \033[37;41mFailed.\033[0m\n", test_case);
            printf("\t- Expected: %s\n\t- Got:      %s\n", expected_result, actual_result);
        }
    }
}

int main(void)
{
    printf("functional testing : ft_strchr \n");
    printf("--------------------------------\n");
    test_function("Hive Helsinki is the coding school", 't', "the coding school", ft_strchr);
    test_function("C Language is amazing", 'a', "anguage is amazing", ft_strchr);
    test_function("C Language is amazing", 'o', NULL, ft_strchr);
    return (0);
}