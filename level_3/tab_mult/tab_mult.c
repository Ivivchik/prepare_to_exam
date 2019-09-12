/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 00:44:42 by marvin            #+#    #+#             */
/*   Updated: 2019/09/12 00:44:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
    int n;

    n = 0;
    while (*s)
        n = n * 10 + (*s++ - '0');
    return (n);
}

void    ft_putnbr(int n)
{
    int a;

    a = 0;
    if (n < 10)
    {
        a = n + '0';
        write(1, &a, 1);
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }

}

int main(int ac, char **av)
{
    int i;

    if (ac == 2)
    {
        i = 1;
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(ft_atoi(av[1]));
            write(1, " = ", 3);
            ft_putnbr(i * ft_atoi(av[1]));
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}
