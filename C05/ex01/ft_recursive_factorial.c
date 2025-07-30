int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    return (nb * ft_recursive_factorial(nb - 1));
}


int ft_iterative_factorial(int nb);

int main(void)
{
    int i;

    for (i = -2; i <= 12; i++)
    {
        printf("ft_recursive_factorial(%2d) = %d\n", i, ft_recursive_factorial(i));
    }

    return 0;
}