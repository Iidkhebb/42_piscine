/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 13:09:40 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/12 14:51:37 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>
int	ft_ultimate_range(int	**range, int	min, int	max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if ((*range) == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min++;
		i++;
	}
	return (i);
}
