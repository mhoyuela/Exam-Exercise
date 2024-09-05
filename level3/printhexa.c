/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-04 16:56:16 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-04 16:56:16 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *str)
{
	int i = 0;
	int n = 0;
	while (str[i] != '\0')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n);
}
void	printhexa(int n)
{
	char *hex = "0123456789abcdef";

	if (n > 16)
		printhexa(n / 16);
	write(1, &hex[n % 16], 1);
}	
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	printhexa(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}