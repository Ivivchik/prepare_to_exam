/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 17:26:44 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/07 22:23:17 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void	write_with_three_space(char *a)
{
	int		i;
	int		j;
	int		k;
	char	s[1000500];

	i = 0;
	j = 0;
	while (a[i] != '\0')
	{
		if (a[i] == ' ')
		{
			k = 0;
			while (k++ < 3)
				s[j++] = ' ';
			i++;
		}
		else
			s[j++] = a[i++];
	}
	s[j] = '\0';
	j = 0;
	while (s[j] != '\0')
		write(1, &s[j++], 1);
}

char	*it_is_space(char *a)
{
	int i;

	i = 0;
	if (a[i] == ' ' || a[i] == '\n' || a[i] == '\t')
		a++;
	return (a);
}

int		main(int ac, char **av)
{
	char	*a;
	int		i;
	int		j;

	a = av[1];
	i = 0;
	j = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if ((av[1][i] == '\n' || av[1][i] == ' ' || av[1][i] == '\t') &&
				(av[1][i + 1] == '\n' || av[1][i + 1] == ' ' ||
				av[1][i + 1] == '\t' || av[1][i + 1] == '\0'))
				i++;
			else
				a[j++] = av[1][i++];
		}
		a[j] = '\0';
		a = it_is_space(a);
		write_with_three_space(a);
	}
	write(1, "\n", 1);
	return (0);
}
