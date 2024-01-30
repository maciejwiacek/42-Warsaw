#include <stdio.h>
#include "ex04/ft_strs_to_tab.c"

int main(void)
{
    char *av[] = {"Abc", "def", "ghi"};
    char ac = 3;
    t_stock_str *result = ft_strs_to_tab(ac, av);
    printf("%d", result[1].size);
    free(result);
    return (0);
}
