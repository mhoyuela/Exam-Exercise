/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-14 11:43:38 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-14 11:43:38 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
void rostring(char *str)
{
	int i = 0;
	int j = 0;
	int r = 0;
	
	while((str[i]) && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	j = i;
	while((str[i]) && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	while((str[i]) && str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, " ", 1);
	while ((str[j]) && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
	{
		write(1, &str[j], 1);
		j++;
	}
}
int main(int argc, char *argv[])
{
	int i = 0;
	if (argc == 2)
	{
		rostring(argv[1]);
	}
	else if(argc > 2)
	{
		while(argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}