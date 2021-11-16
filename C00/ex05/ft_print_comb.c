/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidkhebb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/24 12:19:40 by iidkhebb          #+#    #+#             */
/*   Updated: 2021/06/24 19:11:15 by iidkhebb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	g_num1;
int	g_num2;
int	g_num3;
void	printer1(int	num1, int	num2, int	num3);
void	printer2(void);

void	ft_print_comb(void)
{
	g_num1 = 48;
	while (g_num1 < 58)
	{
		g_num2 = g_num1 + 1;
		while (g_num2 < 58 )
		{
			g_num3 = g_num2 + 1;
			while (g_num3 < 58 )
			{
				printer1(g_num1, g_num2, g_num3);
				if (!(g_num1 == '7' && g_num2 == '8' && g_num3 == '9'))
				{
					printer2();
				}
				g_num3++;
			}
			g_num2++;
		}
		g_num2 = 48;
		g_num1++;
	}
}

void	printer1 (int	num1, int	num2, int	num3)	
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
}

void	printer2(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}
