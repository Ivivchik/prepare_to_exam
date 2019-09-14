/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkuhic <hkuhic@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:26:41 by hkuhic            #+#    #+#             */
/*   Updated: 2019/09/14 17:58:19 by hkuhic           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*ft_itoa(int nbr)
{
	if (nbr == -2147483648)
		return ("-2147483648");
	int len;
	char *str;
	int n;
	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	n = nbr;
	while (n)
	{
		n /= 10;
		len++;
	}
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str[len] = '\0';
	len--;
	while (nbr)
	{
		str[len] = nbr % 10 + '0';
		nbr /= 10;
		len--;
	}
	str[len] = '-';
	return (str);
}

int main(int ac, char **av)
{
	(void)ac;
	int a = atoi(av[1]);
	char *s;
	s = ft_itoa(a);
	int i = 0;
	while (s[i] != '\0')
		write(1, &s[i++], 1);
	return (0);
}
