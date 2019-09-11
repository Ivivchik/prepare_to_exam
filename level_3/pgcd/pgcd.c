/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:11:32 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/11 19:31:43 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	find_hcd(int a, int b)
{
	int hcd;

	hcd = 1;
	if (a == 0 || b == 0)
		return (0);
	if (a > b)
	{
		while (hcd != 0)
		{
			hcd = a - a / b * b;
			a = b;
			b = hcd;
		}
		return (a);
	}
	else
	{
		while (hcd != 0)
		{
			hcd = b - b / a * a;
			b = a;
			a = hcd;
		}
		return (b);
	}
}

int	main(int ac, char **av)
{
	int a;
	int b;
	int hcd;

	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		hcd = find_hcd(a, b);
		printf("%d", hcd);
	}
	printf("\n");
	return (0);
}
