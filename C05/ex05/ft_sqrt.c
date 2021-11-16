/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 14:02:22 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/07 11:43:06 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
int	ft_sqrt(int nb)
{
	int	root;

	root = 1;
	if (nb > 0)
	{
		while (root * root <= nb)
		{
			if (root * root == nb)
			{
				return (root);
			}
			else if (root >= 46341)
			{
				return (0);
			}
			root++;
		}
	}
	return (0);
}
