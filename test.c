#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int a, b;
    a = printf("ho stampato %s caratteri\n", "test");
    b = ft_printf("ho stampato %s caratteri\n", "test");
    printf("ft: %d libc: %d", b, a);

    return 0;
}
