/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-20 10:12:17 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-20 10:12:17 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_firstword(char *str)
{
	int i = 0;
	while (str[i] == ' ' && str[i] != '\0')
		i++;
	while (str[i] != '\0' && str[i] != ' ')
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	char *s = argv[1];
	ft_firstword(s);
	return (0);
}
