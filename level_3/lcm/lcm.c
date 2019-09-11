/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:26:09 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/11 19:29:06 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	find_hcf(unsigned int a, unsigned int b)
{
	unsigned int	hcf;

	hcf = 1;
	if (a == 0 || b == 0)
		return (0);
	if (a >= b)
	{
		while (hcf != 0)
		{
			hcf = a - a / b * b;
			a = b;
			b = hcf;
		}
		return (a);
	}
	else
	{
		while (hcf != 0)
		{
			hcf = b - b / a * a;
			b = a;
			a = hcf;
		}
		return (b);
	}
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;
	unsigned int	hcf;

	hcf = find_hcf(a, b);
	lcm = (a * b) / hcf;
	return (lcm);
}
