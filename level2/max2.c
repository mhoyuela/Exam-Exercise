/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-04 12:02:01 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-04 12:02:01 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int max = tab[0];
	if (tab[0] == '\0')
		return (0);
	while (tab[i])
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
int main()
{
	int a[] = {};
	printf("%i", max(a, 5));
	return (0);
}