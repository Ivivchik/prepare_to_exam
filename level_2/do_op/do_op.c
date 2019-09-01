/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 17:16:58 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/01 18:41:29 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int number_1;
	int number_2;
	int res;

	res = 0;
	if (ac == 4)
	{
		number_1 = atoi(av[1]);
		number_2 = atoi(av[3]);
		if (*av[2] == '+')
			res = (number_1 + number_2);
		else if (*av[2] == '-')
			res = number_1 - number_2;
		else if (*av[2] == '%')
			res = number_1 % number_2;
		else if (*av[2] == '/')
			res = number_1 / number_2;
		else if (*av[2] == '*')
			res = number_1 * number_2;
		printf("%d\n", res);
	}
	else
		write(1, "\n", 1);
	return (0);
}
