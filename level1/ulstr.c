/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 17:23:50 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-25 17:23:50 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ulstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i], 1); 
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1); 
		}
		else 
			write (1, &str[i], 1);
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
	ulstr(s);
	return (0);
}