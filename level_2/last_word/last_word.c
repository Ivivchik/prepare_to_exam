/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 21:02:37 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/02 20:04:21 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;

	j = 0;
	i = ft_strlen(str);
	while (j < ft_strlen(str) / 2)
	{
		ft_swap(&str[j], &str[i - 1]);
		j++;
		i--;
	}
	return (str);
}

int		main(int ac, char **av)
{
	int		i;
	int		j;
	char	a[1000500];

	j = 0;
	if (ac == 2)
	{
		i = ft_strlen(av[1]) - 1;
		while (av[1][i] == '\n' || av[1][i] == '\t' || av[1][i] == ' ')
			i--;
		while (av[1][i] != '\n' && av[1][i] != '\t' && av[1][i] != ' ')
			a[j++] = av[1][i--];
		a[j] = '\0';
		ft_strrev(a);
		j = 0;
		while (a[j] != '\0')
		{
			write(1, &a[j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
