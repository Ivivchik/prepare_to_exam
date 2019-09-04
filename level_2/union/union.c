/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 18:49:56 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/04 17:21:35 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		i++;
	}
	s1[len + i] = '\0';
	return (s1);
}

char	*ft_union(char *s)
{
	int i;
	int len;

	i = 0;
	while (s[i] != '\0')
	{
		len = i + 1;
		while (s[len] != '\0')
		{
			if (s[i] == s[len])
				s[len] = '\n';
			len++;
		}
		i++;
	}
	return (s);
}

char	*ft_delet(char *s)
{
	int		i;
	int		j;
	char	*a;

	i = 0;
	j = 0;
	a = s;
	while (s[i] != '\0')
	{
		if (s[i] != '\n')
		{
			a[j] = s[i];
			j++;
		}
		i++;
	}
	a[j] = '\0';
	return (a);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{
		ft_strcat(av[1], av[2]);
		ft_union(av[1]);
		ft_delet(av[1]);
		while (av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
