/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:39:56 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/04 18:05:30 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb > 1)
	{
		while (x <= nb / 2)
		{
			if (nb % x == 0)
			{
				return (0);
			}
			x++;
		}
		return (1);
	}
	return (0);
}

int	ft_find_next_prime(int nb)
{
	int	max_int_value;

	max_int_value = 2147483647;
	while ((nb < max_int_value) && (ft_is_prime(nb) == 0))
	{
		nb++;
	}
	return (nb);
}
