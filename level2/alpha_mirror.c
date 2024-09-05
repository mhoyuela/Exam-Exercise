/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-26 10:25:10 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-26 10:25:10 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int putchar(char c)
{
	write (1, &c, 1);
	return (c);
}
void	alpha_mirror(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			putchar("abcdefghijklmnopqrstuvwxyz"['z' - str[i]]);
		}	
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			putchar("ABCDEFGHIJKLMNOPQRSTUVWXYZ"['Z' - str[i]]);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
	//s = str['z' - i];
	//write (1, &s, 1);
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
	alpha_mirror(s);
	return (0);
}