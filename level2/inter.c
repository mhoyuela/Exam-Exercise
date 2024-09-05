/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-06 16:29:17 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-06 16:29:17 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print(char *s, int i)
{
	int	j = 0;
	int	cont = 0;
	while (j <= i)
	{
		if (s[j] == s[i])
			cont++;
		j++;
	}
	if (cont == 1)
		write(1, &s[i], 1);
}

void inter(char *s1, char *s2)
{
	int	i = 0;
	int	j = 0;

	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
			{
				ft_print(s1, i);
				break;
			}
			else
				j++;
		}
		i++;
	}
	write(1, "\n", 1);
}
int main()
{
/* 	if (argc != 2)
	{
		write (1, "\n",1);
		return (1);
	} */
	char *s1 = "ddf6vewg64f";
	char *s2 = "gtwthgdwthdwfteewhrtag6h4ffdhsd";
	inter(s1, s2);
	return (0);
}