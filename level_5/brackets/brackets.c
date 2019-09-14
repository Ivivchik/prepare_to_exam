/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 18:11:59 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/14 18:38:32 by hkuhic           ###   ########.fr       */
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

void	*brackets(char *a)
{
	int i;
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;
	int c6;
	int a1;
	int a2;
	int a3;
	int a4;
	int a5;
	int a6;
	int len;

	i = 0;
	c1 = 0;
	c2 = 0;
	c3 = 0;
	c4 = 0;
	c5 = 0;
	c6 = 0;
	a1 = 0;
	a2 = 0;
	a3 = 0;
	a4 = 0;
	a5 = 0;
	a6 = 0;
	len = ft_strlen(a);
	while (i < ft_strlen(a) / 2)
	{
		if (a[i] == '(')
			c1++;
		if (a[i] == ')')
			c2++;
		if (a[i] == '{')
			c3++;
		if (a[i] == '}')
			c4++;
		if (a[i] == '[')
			c5++;
		if (a[i] == ']')
			c6++;
	}
	while (a[i] != '\0')
	{
		if (a[i] == '(')
			a1++;
		if (a[i] == ')')
			a2++;
		if (a[i] == '{')
			a3++;
		if (a[i] == '}')
			a4++;
		if (a[i] == '[')
			a5++;
		if (a[i] == ']')
			a6++;
	}
	if (c1 == c2 || c2 = )

}
