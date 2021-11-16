/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:41:42 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/07/08 21:10:23 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_swap(char	**a, char	**b)
{
	char	*t;

	t = *a;
	*a = *b;
	*b = t;
}

void	ft_putstr(char	*tab)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		write(1, &tab[i], 1);
		i++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			break ;
	}
	return (s1[i] - s2[i]);
}

int	main(int	ac, char	**av)
{
	int	i;
	int	j;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			j = i + 1;
			while (av[j])
			{
				if (ft_strcmp(av[i], av[j]) > 0)
					ft_swap(&av[i], &av[j]);
				j++;
			}
			i++;
		}
		i = 1;
		while (av[i] != '\0')
		{
			ft_putstr(av[i]);
			i++;
			ft_putstr("\n");
		}
	}
}
