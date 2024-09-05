/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-23 14:53:23 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-23 14:53:23 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char a, char c)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
		{
			str[i] = c;
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
	if (argc != 4)
	{
		write (1, "\n", 1);
		return (1);
	}
	char *str = argv[1];
	if ((argv[2][1] != '\0') || (argv[3][1]) != '\0')
	{
		write (1, "\n", 1);
		return (1);
	}
	char a = argv[2][0];
	char c = argv[3][0];
	search_and_replace(str, a, c);
	return (0);
}