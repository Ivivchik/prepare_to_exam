/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 17:04:49 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/19 17:02:32 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

char	*it_is_space(char *a)
{
	if (*a == '\n' || *a == ' ' || *a == '\t')
		a++;
	return (a);
}

char	*only_one_space(char *a)
{
	char	*s;
	int		i;
	int		j;

	s = a;
	i = 0;
	j = 0;
	while (a[i] != '\0')
	{
		if ((a[i] == ' ' || a[i] == '\n' || a[i] == '\t') &&
			(a[i + 1] == ' ' || a[i + 1] == '\n' ||
			a[i + 1] == '\t' || a[i + 1] == '\0'))
			i++;
		else
			s[j++] = a[i++];
	}
	s[j] = '\0';
	s = it_is_space(s);
	return (s);
}

void	rostring(char *a)
{
	char	*s;
	int		i;
	int		len;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(a);
	s = (char *)malloc(sizeof(char) * (len + 1));
	while (a[i] != '\n' && a[i] != '\t' && a[i] != ' ' && a[i] != '\0')
		i++;
	i++;
	while (a[i] != '\0')
		s[j++] = a[i++];
	s[j++] = ' ';
	i = 0;
	while (a[i] != '\n' && a[i] != '\t' && a[i] != ' ' && a[i] != '\0')
		s[j++] = a[i++];
	s[j] = '\0';
	j = 0;
	s = it_is_space(s);
	while (s[j] != '\0')
		write(1, &s[j++], 1);
	free(s);
}

int		main(int ac, char **av)
{
	char	*a;

	if (ac > 1)
	{
		a = only_one_space(av[1]);
		rostring(a);
	}
	write(1, "\n", 1);
	return (0);
}
