/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:48:53 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/12 20:12:31 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		it_is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (i);
}

void	fprime(int n)
{
	int i;

	i = 2;
	while (n)
	{
		if (it_is_prime(i) != 0 && n % i == 0)
		{
			if (n / i == 1)
			{
				printf("%d", i);
				break ;
			}
			else
			{
				printf("%d*", i);
				n /= i;
				i = 1;
			}
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;
	int n;

	n = atoi(av[1]);
	i = 2;
	if (ac == 2)
	{
		fprime(n);
	}
	printf("\n");
	return (0);
}
