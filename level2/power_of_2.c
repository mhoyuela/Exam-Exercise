/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power_of_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 12:08:53 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-06 12:08:53 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int	power_of_2(int n)
{
	while (n % 2 == 0)
	{
		n /= 2;
	}
	if (n == 1)
		return (1);
	else
		return (0);
}
int main()
{
	printf("%i", power_of_2(64));
	return (0);
}