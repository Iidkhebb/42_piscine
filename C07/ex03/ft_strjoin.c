/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 14:54:33 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/12 11:43:53 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		dest_sz;
	char	*out;

	i = 0;
	dest_sz = 0;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	while (i < size)
	{
		if (i != 0)
			dest_sz = dest_sz + ft_strlen(sep);
		dest_sz = dest_sz + ft_strlen(strs[i]);
		i++;
	}
	out = malloc(sizeof(char) * dest_sz + 1);
	*out = '\0';
	i = -1;
	while (++i < size)
	{
		if (i != 0)
			ft_strcat(out, sep);
		ft_strcat(out, strs[i]);
	}
	return (out);
}
