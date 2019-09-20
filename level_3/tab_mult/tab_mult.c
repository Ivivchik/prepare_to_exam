/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 23:33:22 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/20 23:45:09 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(char *a)
{
	int n;

	n = 0;
	while (*a)
		n = n * 10 + (*a++ - '0');
	return (n);
}

void putnbr(int n)
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
		putnbr(n / 10);
		putnbr(n % 10);
	}

}

int main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac == 2)
	{
		while (i < 10)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(atoi(av[1]));
			write(1, " = ", 3);
			putnbr(atoi(av[1]) * i);
			write(1, "\n", 1);
			i++;

		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
