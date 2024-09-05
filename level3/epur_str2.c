/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-08 15:05:35 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-08 15:05:35 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void epur_str2(char *str)
{
	int i = 0;

	while (str[i] == ' ' || str[i] == '\t')
			i++;
	while (str[i])
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
		while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
		if(str[i] != '\0')
		{
			write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	epur_str2(argv[1]);
	return (0);
}