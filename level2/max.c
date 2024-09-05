/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-16 16:27:44 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-16 16:27:44 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	max(int *tab, unsigned int len)
{
	int i = 0;
	int max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return(max);
}
int main()
{
	int tab[] = {1, 3, 2, 8, 4, 6, 7};
	unsigned int len = 7;
	printf("%i", max(tab, len));
	return (0);
}