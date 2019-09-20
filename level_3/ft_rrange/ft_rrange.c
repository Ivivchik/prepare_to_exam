/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:29:34 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/20 22:19:01 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		*ft_range(int start, int end)
{
	int len;
	int *s;

	len = (end >= start) ? (end - start + 1) : (start - end + 1);
	if (!(s = (int *)malloc(sizeof(int) * (len + 1))))
		return (NULL);
	while (len)
	{
		len--;
		s[len] = (end >= start) ? start++ : start--;
	}
	return (s);
}

int		main(int ac, char **av)
{
	int	e;
	int	s;
	int	*a;
	int i = 0;

	(void)ac;
	s = atoi(av[1]);
	e = atoi(av[2]);
	a = ft_range(s, e);
	int len = 7;
	while (len)
	{
		printf("%d ", a[i]);
		i++;
		len--;
	}
	return (0);
}
