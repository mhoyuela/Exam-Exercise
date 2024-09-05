/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-29 11:54:28 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-29 11:54:28 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int n)
{
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putchar((n % 10) + '0');
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
}
void	add_prime_sum(int n)
{
	int i = n -1;
	int sum = 0;

	while (n > 1)
	{
		if (n % i != 0)
		{
			i--;
		}
		else if (i == 1)
		{
			sum += n;
			n--;
			i = n -1;
		}
		else
		{
			n--;
			i = n - 1;
		}
	}
	ft_putnbr(sum);
}
int	ft_atoi(char *s)
{
	int i = 0;
	int result = 0;
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		result = (result * 10) + (s[i] -'0');
		i++;
	}
	return (result);
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return(1);
	}
	int n = ft_atoi(argv[1]);
	add_prime_sum(n);
	write (1, "\n", 1);
}