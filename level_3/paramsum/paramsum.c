/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:02:32 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/11 19:10:19 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int a)
{
	int n;

	n = 0;
	if (a < 10)
	{
		n = a + '0';
		write(1, &n, 1);
	}
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}

int		main(int ac, char **av)
{
	int i;

	(void)av;
	i = ac - 1;
	ft_putnbr(i);
	write(1, "\n", 1);
	return (0);
}
