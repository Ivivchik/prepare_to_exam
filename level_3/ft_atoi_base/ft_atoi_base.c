/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 23:06:44 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/20 23:32:22 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_blank(char c)
{
	if (c <= 32)
		return (1);
	return (0);
}

int is_valid(char c, int base)
{
	char digits1[17] = "0123456789abcdef";
	char digits2[17] = "0123456789ABCDEF";
	while (base--)
		if (digits1[base] == c || digits2[base] == c)
			return (1);
	return (0);
}

int value(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	else if (c >= 'a' && c <= 'f')
		return (c - 'a' + 10);
	else if (c >= 'A' && c <= 'F')
		return (c - 'A' + 10);
	return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int res = 0;
	int sign;
	while (is_blank(*str))
		str++;
	if (*str == '-')
		sign = -1;
	else
		sign = 1;
	while (is_valid(*str, str_base))
		res = res * str_base + value(*str++);
	return (res * sign);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		printf("result: %d\n", ft_atoi_base(av[1], atoi(av[2])));
	return (0);
}
