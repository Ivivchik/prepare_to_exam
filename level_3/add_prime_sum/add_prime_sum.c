/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 19:28:53 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/05 18:20:01 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		it_is_prime(int a)
{
	int i;

	i = 2;
	while (i < a)
	{
		if (a % i == 0)
			return (0);
		i++;
	}
	return (i);
}

int		ft_atoi(char *s)
{
	int i;
	int	n;

	i = 0;
	n = 0;
	while (s[i] != '\0')
		n = n * 10 + (s[i++] - '0');
	return (n);
}

void	ft_putnbr(int n)
{
	int c;

	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int		main(int ac, char **av)
{
	int n;
	int i;
	int sum;
	int j;

	sum = 0;
	if (ac == 2)
	{
		i = 2;
		j = 0;
		n = ft_atoi(av[1]);
		while (i <= n)
		{
			j = it_is_prime(i);
			sum += j;
			i++;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
