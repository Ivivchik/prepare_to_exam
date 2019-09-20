/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 17:22:42 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/20 20:20:11 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return(*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_wdmatch(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	s = s2;
	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				s[k++] = s2[j++];
				break ;
			}
			else
				j++;
		}
		i++;
	}
	s[k] = '\0';
	return (s);
}

int		main(int ac, char **av)
{
	int		i;
	char	*a;
	int		c;

	if (ac == 3)
	{
		i = 0;
		c = 0;
		a = ft_wdmatch(av[1], av[2]);
		c = ft_strcmp(a, av[1]);
		if (c == 0)
		{
			while (av[1][i] != '\0')
				write(1, &av[1][i++], 1);
			write(1, "\n", 1);
		}
		else
			write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
