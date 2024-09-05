/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-31 13:16:07 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-31 13:16:07 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int n)
{
	int result;
	if (n > 9)
	{
		putnbr(n / 10);
	}
	result = (n % 10) + '0';
	write (1, &result, 1);
}
int main(int argc, char *argv[])
{
	putnbr(argc -1);
	write(1, "\n", 1);
	return (0);
}