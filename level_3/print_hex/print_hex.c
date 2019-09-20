/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:33:47 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/20 19:56:14 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *s)
{
	int n;

	n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + (*s++ - '0');
	return (n);
}

void	print_hex(int n)
{
	int c;

	if (n >= 16)
		print_hex(n / 16);
	c = n % 16 + (n % 16 < 10 ? '0' : 'a' - 10);
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int n;

	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		print_hex(n);
	}
	write(1, "\n", 1);
	return (0);
}
