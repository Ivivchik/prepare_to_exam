/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 14:34:58 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/01 15:22:56 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac == 2)
	{
		j = ft_strlen(av[1]);
		while (i < ft_strlen(av[1]) / 2)
		{
			ft_swap(&av[1][i], &av[1][j - 1]);
			i++;
			j--;
		}
		while (*av[1])
		{
			write(1, av[1], 1);
			av[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
