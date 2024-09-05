/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-23 13:53:40 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-23 13:53:40 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] < 'z')
			|| (str[i] >= 'A' && str[i] < 'Z'))
		{
			str[i] = str[i] + 1;
			write (1, &str[i], 1);
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			str[i] = str[i] - 25;
			write (1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	char *s = argv[1];
	rotone(s);
	return (0);
}