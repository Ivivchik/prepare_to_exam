/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/01 20:15:01 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/04 19:12:30 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_without_doubles(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = i + 1;
		while (s[j] != '\0')
		{
			if (s[i] == s[j])
				s[j] = '\n';
			j++;
		}
		i++;
	}
	return (s);
}

char	*ft_inter(char *s1, char *s2)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	s = s1;
	while (s1[i] != '\0')
	{
		j = 0;
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

char	*ft_delete(char *c)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	s = c;
	while (c[i] != '\0')
	{
		if (c[i] != '\n')
			s[j++] = c[i++];
		else
			i++;
	}
	s[j] = '\0';
	return (s);
}

int		main(int ac, char **av)
{
	int		i;
	char	*s;

	if (ac == 3)
	{
		i = 0;
		s = ft_inter(av[1], av[2]);
		s = ft_without_doubles(s);
		s = ft_delete(s);
		while (s[i] != '\0')
			write(1, &s[i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
