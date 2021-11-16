/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:22:46 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/05 18:03:28 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	len_check(char	*base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	base_check(char	*base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	len = len_check(base);
	if (len == 1 || base[0] == '\0')
		return (0);
	if (!(len == 10 || len == 8 || len == 16 || len == 2))
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[i] == '+' || base[i] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	cal(int	i, int	nbr, char	*base)
{
	if (nbr >= i)
	{
		cal(i, nbr / i, base);
		cal(i, nbr % i, base);
	}
	else
		write(1, base + nbr, 1);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int	i;
	int	len;

	i = 0;
	len = len_check(base);
	if (nbr < 0 && base_check(base) == 1)
	{
		nbr = nbr * -1;
		write(1, "-", 1);
	}
	else if (base_check(base) == 0)
		return ;
	if (base_check(base) == 1)
		cal(len, nbr, base);
	else
		return ;
}
