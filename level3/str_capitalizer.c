/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-07 09:41:16 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-07 09:41:16 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			write(1, &str[i], 1);
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				i++;
				str[i] = str[i] - 32;
				write(1, &str[i], 1);
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int main(int argc, char *argv[])
{
	int i = 1;

	if (argc == 1)
	{
		write  (1, "\n", 1);
		return (1);
	}
	else
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			i++;
		}
	}

}