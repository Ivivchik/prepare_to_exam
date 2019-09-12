/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 01:08:53 by marvin            #+#    #+#             */
/*   Updated: 2019/09/12 01:08:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int it_is_prime(int n)
{
    int i;

    i = 2;
    while (i < n)
    {
        if (n % i == 0)
            return (0);
        i++;
    }
    return (i);
}

int main(int ac, char **av)
{
    int i;
    int numb;
    (void)ac;
    i = 2;
    numb = atoi(av[1]);
    if (ac == 2)
    {
        while (numb != 0)
        {
            if (it_is_prime(i) != 0 && numb % i == 0)
            {
                if (numb / i == 1)
                {
                    printf("%d", i);
                    break ;
                }
                else
                {
                    printf("%d*", i);
                    numb /= i;
                    i = 1;
                }
            }
            i++;
        }
    }
    printf("\n");
    return (0);
}
