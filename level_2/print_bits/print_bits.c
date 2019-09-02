/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 20:44:45 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/02 22:26:30 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int i;

	i = 0;
	while (i++ < 8)
	{
		if (octet % 2 != 0)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet /= 2;
	}
}

int main()
{
	unsigned char a;

	a = 15;
	print_bits(a);
	return (0);
}
