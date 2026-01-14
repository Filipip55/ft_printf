#include "ft_printf.h"

int main()
{
    int a, b;
    a = printf("ho stampato %d caratteri\n", 9);
    b = ft_printf("ho stampato %d caratteri\n", 9);
    printf("ft: %d libc: %d", a, b);

    return 0;
}
