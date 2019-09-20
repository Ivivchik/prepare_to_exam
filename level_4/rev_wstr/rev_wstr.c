/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 18:49:05 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/19 16:53:40 by hkuhic           ###   ########.fr       */
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

void	rex_wstr(char *s)
{
	char *a;
	int i;
	int j;
	int len;
	int len1;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	len1 = len - 1;
	a = (char *)malloc(sizeof(char) * len + 2);
	len--;
	while (len1)
	{
		while (s[len] != ' ' && s[len] != '\t' && s[len] != '\n')
			len--;
		i = len;
		while (s[i] != '\0')
			a[j++] = s[i++];
		a[j] = ' ';
		while (a[j] != '\0')
			write(1, &a[j++], 1);
		len1 -= len;
	}
}

char	*only_space(char *a)
{
	int		i;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	s = a;
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
	return (s);
}

int		main(int ac, char **av)
{
	char *s;

	if (ac == 2)
	{
		s = only_space(av[1]);
		if (*s == '\n' || *s == ' ' || *s == '\t')
			s++;
		rex_wstr(s);

	}
	write(1, "\n", 1);
	return (0);
}
