/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-30 10:56:53 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-30 10:56:53 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int i = 0;
	int space = 0;
	int first_time = 1;

	while (str[i] != '\0')
	{
		space = 0;
		while (str[i] == 32 || str[i] == 9)
		{
			i++;
			space = 1;
		}
		if (str[i] != '\0')
		{
			if (space && !first_time)
				write (1, " ", 1);
			first_time = 0;
			write (1, &str[i], 1);
			i++;
		}
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
	epur_str(s);
	return (0);
}