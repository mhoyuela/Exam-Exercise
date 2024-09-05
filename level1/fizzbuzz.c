/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-25 15:27:21 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-25 15:27:21 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putnbr(int i)
{
	char *s = "0123456789";

	if (i > 9)
		ft_putnbr(i / 10);
	write (1, &s[i % 10], 1);
}
void	fizzbuzz(int i)
{
	while (i >= 1 && i <= 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			write (1, "fizzbuzz", 8);
		}
		else if (i % 3 == 0)
		{
			write (1, "fizz", 4);
		}
		else if (i % 5 == 0)
		{
			write (1, "buzz", 4);
		}
		else
			ft_putnbr(i);
		i++;
		write (1, "\n",1);
	}
}
int main()
{
	fizzbuzz(1);
	return (0);
}