/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 18:47:06 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/06/27 19:46:33 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a / *b;
	*b = *a % *b;
	*a = x;
}
