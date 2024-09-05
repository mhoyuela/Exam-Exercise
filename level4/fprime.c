/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-07 17:18:59 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-07 17:18:59 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void fprime(int n)
{
	int i = 2;
	if (n == 0 || n == 1)
	{
		printf("%d", n);
	}
	while (i <= n)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (n == 1)
			{
				printf("%d", i);
			}
			else
				printf("%d*", i);
		}
		i++;
	}
	printf("\n");
}
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	else
		printf("\n");
	return (0);
}