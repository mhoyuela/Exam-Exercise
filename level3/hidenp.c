/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-31 10:39:21 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-31 10:39:21 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	hidenp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int r = 0;

	while (s2[j])
	{
		if (s2[j] != s1[i])
		{
			if (!s2[j])
				r = 0;
		}
		else
		{
			i++;
			if (s1[i] == '\0')
				r = 1;
		}
		j++;
	}
	return (r);
}
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (1);
	}
	int r = hidenp(argv[1], argv[2]);
	printf("%i", r);
	return (0);
}