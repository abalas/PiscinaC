int ft_iterative_factorial(int nb)
{
    int result;

    if (nb < 0)
        return (0);
    result = 1;
    while (nb > 0)
    {
        result *= nb;
        nb--;
    }
    return (result);
}
#include <stdio.h>


int ft_iterative_factorial(int nb);

int main(void)
{
    int i;

    for (i = -2; i <= 12; i++)
    {
        printf("ft_iterative_factorial(%2d) = %d\n", i, ft_iterative_factorial(i));
    }

    return 0;
}
