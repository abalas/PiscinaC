int ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return 0;
    if (power == 0)
        return 1;
    return nb * ft_recursive_power(nb, power - 1);
}
#include <stdio.h>

int ft_recursive_power(int nb, int power);

int main(void)
{
    int bases[] = {0, 2, 5, -3};
    int powers[] = {0, 1, 3, -1, 5};
    int i, j;

    for (i = 0; i < sizeof(bases)/sizeof(bases[0]); i++)
    {
        for (j = 0; j < sizeof(powers)/sizeof(powers[0]); j++)
        {
            printf("%d ^ %d = %d\n", bases[i], powers[j], ft_recursive_power(bases[i], powers[j]));
        }
    }

    return 0;
}
