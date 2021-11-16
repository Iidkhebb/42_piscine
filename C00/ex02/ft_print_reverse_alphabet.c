/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 11:26:01 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/06/24 11:40:05 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	revalpha;

	revalpha = 'z';
	while (revalpha >= 'a')
	{
		write (1, &revalpha, 1);
		revalpha--;
	}
}
