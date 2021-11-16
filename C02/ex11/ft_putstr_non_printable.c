/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 10:25:52 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/06/30 08:56:05 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	hexcacul(char str)
{
	int	index1;
	int	index2;

	index1 = str / 16 + 48;
	index2 = str % 16;
	if (index2 < 10)
	{
		index2 = index2 + 48;
	}
	else
	{
		index2 = index2 + 87;
	}
	write(1, &index1, 1);
	write(1, &index2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	g;

	g = 0;
	while (str[g] != '\0')
	{
		if ((str[g] <= 31) || (str[g] == 127))
		{
			write(1, "\\", 1);
			hexcacul(str[g]);
		}
		else
		{
			write(1, &str[g], 1);
		}
		g++;
	}
}
