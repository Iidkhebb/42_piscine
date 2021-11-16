/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 11:12:01 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/11 21:24:16 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>
int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	i = 0;
	ptr = malloc(sizeof(int) * (max - min));
	if (ptr == NULL)
		return (0);
	if (min >= max)
		return (0);
	while (min < max)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
