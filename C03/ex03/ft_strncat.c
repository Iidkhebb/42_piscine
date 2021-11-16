/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:04:24 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/03 17:29:29 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	int				i;
	int				j;

	count = 0;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && count < nb)
	{
		dest[i + j] = src[j];
		j++;
		count++;
	}
	dest[i + j] = '\0';
	return (dest);
}
