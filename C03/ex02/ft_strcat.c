/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:57:41 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/03 14:06:06 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
char	*ft_strcat(char *dest, char *src)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}