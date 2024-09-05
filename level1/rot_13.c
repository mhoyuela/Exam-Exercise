/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-22 17:52:29 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-22 17:52:29 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm')
		|| (str[i] >= 'A' && str[i] <= 'M'))
		{
			str[i] = str[i] + 13;
			write (1, &str[i], 1);
		}
		else if ((str[i] >= 'm' && str[i] <= 'z')
		|| (str[i] >= 'M' && str[i] <= 'Z'))
		{
			str[i] = str[i] - 13;
			write (1, &str[i], 1);
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
	rot_13(s);
	return(0);

}