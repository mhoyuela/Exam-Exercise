/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-09 15:29:47 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-09 15:29:47 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void change_letter(char *str)
{
	int i = 0;
	char a;
	while (str[i] != '\0' && str[i] != '\t' && str[i] != ' ')
	{
		//a = str[i];
		write (1, &str[i], 1);
		i++;
	}
}
void	last_word(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] == ' ')
	{
		i--;
	}
	while (str[i] != ' ' && str[i] != '\t')
		i--;
	i++;
	change_letter(&str[i]);
	write (1, "\n", 1);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	char *w = argv[1];
	last_word(w);
	return (0);
}