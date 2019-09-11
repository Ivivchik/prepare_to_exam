/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 21:20:52 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/10 21:59:30 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2 || *s1 == '\0' || *s2 == '\0')
			return ('0');
		else
		{
			s1++;
			s2++;
		}
	}
	return ('1');
}

char	*hidenp(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*s;

	i = 0;
	s = s2;
	k = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		while (s2[j] != '\0')
		{
			if (s2[j] == s1[i])
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
	char a;
	char *s;

	if (ac == 3)
	{
		s = hidenp(av[1], av[2]);
		a = ft_strcmp(s, av[1]);
		write(1, &a, 1);
	}
	write(1, "\n", 1);
	return (0);
}
