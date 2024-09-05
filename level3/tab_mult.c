/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-07 11:56:31 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-07 11:56:31 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int ft_atoi(char *str)
{
	int i = 0;
	int result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}
void putnbr(int n)
{
	char *str = "0123456789";
	if (n > 9)
	{
		putnbr(n / 10);
	}
	write (1, &str[n % 10], 1);
}
void	tab_mult(int n)
{
	int i = 1;
	int result;
	while (i < 10)
	{
		putnbr(i);
		write(1, " x ", 3);
		putnbr(n);
		write(1, " = ", 3);
		result = i * n;
		putnbr(result);
		write(1, "\n", 1);
		i++;
	}
}
int main(int argc, char *argv[])
{
	int n = ft_atoi(argv[1]);
	tab_mult(n);
	return (0);
}