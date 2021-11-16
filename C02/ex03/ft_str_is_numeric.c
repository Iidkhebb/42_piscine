/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 09:10:56 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/06/30 09:11:34 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_str_is_numeric(char *str)
{
	int	r;
	int	i;

	r = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
		{
			r = 1;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (r);
}
