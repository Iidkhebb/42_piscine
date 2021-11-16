/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 09:18:09 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/06/30 18:32:05 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int	cartest(char str, int test)
{
	if (str >= '\0' && str <= '/')
		test = 0;
	if (str >= ':' && str <= '@')
		test = 0;
	if (str >= '[' && str <= '`')
		test = 0;
	if (str >= '{' && str <= '~')
		test = 0;
	return (test);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	test;

	i = 0;
	test = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (test == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				test = 1;
			}
		}
		test = cartest (str[i], test);
		if (str[i] >= '0' && str[i] <= '9')
			test = 1;
		i++;
	}
	return (str);
}
