/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 14:26:14 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-26 14:26:14 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	camel_to_snake(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			//str[i - 1] = 
			str[i] = str[i] + 32;
			write (1, "_", 1);
			write (1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	camel_to_snake(argv[1]);
	return (0);
}