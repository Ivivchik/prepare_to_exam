/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 21:02:37 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/01 21:47:28 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int i;
	int j;
	int c;
	int k;

	k = 0;
	if (ac == 2)
	{
		i = 0;
		while (av[1][i]!= '\0' && (av[1][i] == '\n' || av[1][i] == '\t' || av[1][i] == ' '))
			k++;
		i = ft_strlen(av[1]);
		i--;
		while (i >= 0 && (av[1][i] == '\n' || av[1][i] == '\t' || av[1][i] == ' '))
			i--;
		c = i;
		while (av[1][i] != '\n' && av[1][i] != '\t' && av[1][i] != ' ')
			i--;
		j = i;
		while ( k <= j && j <= c)
		{
			write(1, av[1], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
