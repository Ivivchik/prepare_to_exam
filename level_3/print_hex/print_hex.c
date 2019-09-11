/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 19:33:47 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/11 21:52:31 by hkuhic           ###   ########.fr       */
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
	char	*s;

	s = "0123456789abcdef";
	if (n == 0)
		write(1, "0", 1);
	while (n)
	{
		write(1, &s[n % 16], 1);
		n /= 16;
	}
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
