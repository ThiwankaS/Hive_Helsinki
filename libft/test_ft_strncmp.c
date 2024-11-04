#include <stdio.h>
#include <limits.h>
#include "libft.h"

void test_function(const char *str1, const char *str2, unsigned int size, int expected_result, int (*func)(const char *str1, const char *str2, unsigned int size))
{
    int actual_result = func(str1, str2, size);
    if (actual_result == expected_result)
    {
        printf("Test case: %s and %s for %d \033[37;42mPassed.\033[0m\n", str1, str2, size);
        printf("\t- Expected: %d\n\t- Got:      %d\n", expected_result, actual_result);
    }
    else
    {
        printf("Test case: %s and %s for %d \033[37;41mFailed.\033[0m\n", str1, str2, size);
        printf("\t- Expected: %d\n\t- Got:      %d\n", expected_result, actual_result);
    }
}

int main(void)
{
    printf("functional testing : ft_strncmp \n");
    printf("--------------------------------\n");
    test_function("Hello", "Hello", 5, 0, ft_strncmp);
    test_function("Hello", "Helloo", 5, 0, ft_strncmp);
    test_function("Helloo", "Hello", 5, 0, ft_strncmp);
    test_function("abcd", "abce", 4, -1, ft_strncmp);
    test_function("abce", "abcd", 4, 1, ft_strncmp);
    test_function("abpd", "abcd", 4, 13, ft_strncmp);
    test_function("abcd", "abpd", 4, -13, ft_strncmp);
    test_function("", "abcd", 4, -97, ft_strncmp);
    test_function("abcd", "", 4, 97, ft_strncmp);
    test_function("", "", 3, 0, ft_strncmp);
    test_function("abc", "abe", 0, 0, ft_strncmp);
    return (0);
}