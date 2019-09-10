/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:29:34 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/10 19:18:50 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int start, int end)
{
	int	len;
	int	*s;
	int	i;

	i = 0;
	len = end - start;
	if (len <= 0)
		len = -1 * len + 1;
	else
		len += 1;
	if (!(s = (int *)malloc(sizeof(int) * (len + 1))))
		return (NULL);
	if (start <= end)
		while (start <= end)
			s[i++] = start++;
	else
		while (end <= start)
			s[i++] = end++;
	s[i] = '\0';
	return (s);
}

int		main(int ac, char **av)
{
	int	e;
	int	s;
	int	*a;
	int	i;

	(void)ac;
	s = atoi(av[1]);
	e = atoi(av[2]);
	a = ft_range(s, e);
	while (*a)
		printf("%d\n", a[i++]);
	return (0);
}
