/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgdc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-31 13:56:40 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-31 13:56:40 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
	int i = 1;
	int x = 0;
	while (i <=a || i <= b)
	{
		if (a % i == 0 && b % i == 0)
			x = i;
		i++;
	}
	return (x);
}
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write (1, "\n", 1);
		return (1);
	}
	int x = atoi(argv[1]);
	int z = atoi(argv[2]);
	int r = pgcd(x, z);
	printf ("%i", r);
	return (0);
}