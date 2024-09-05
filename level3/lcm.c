/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-31 11:32:43 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-31 11:32:43 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int x;
	if (a < b)
		x = a;
	else
		x = b;
	while (1)
	{
		if (x % a == 0 && x % b == 0)
			return (x);
		x++;
	}
	return (0);
}
int main()
{
	int r = lcm(18, 15);
	printf("%i", r);
	return (0);
}