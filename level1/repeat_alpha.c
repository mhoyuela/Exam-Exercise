/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-22 14:31:55 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-22 14:31:55 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int i = 0;
	int x;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			x = str[i] - 'a' + 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			x = str[i] - 'A' + 1;
		}
		else
			write(1, &str[i], 1);
		while(x != 0)
		{
			write (1, &str[i], 1);
			x--;
		}
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
	repeat_alpha(s);
	return (0);
}