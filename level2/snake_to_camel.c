/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-16 16:51:27 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-16 16:51:27 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	snake_to_camel(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '_')
		{
			i++;
			str[i] = str[i] - 32;
			write (1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	snake_to_camel(argv[1]);
	return (0);
}