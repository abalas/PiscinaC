#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else
    {
        if (nb < 0)
        {
            ft_putchar('-');
            nb = -nb;
        }
        if (nb >= 10)
        {
            ft_putnbr(nb / 10);
        }
        ft_putchar(nb % 10 + '0');
    }
}


int main(void)
{
    int nb = 1234;
    ft_nbr(nb);
    return (0);
}
