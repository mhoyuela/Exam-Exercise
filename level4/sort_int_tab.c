/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-08 16:06:28 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-08 16:06:28 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*sort_int_tab(int *tab, int size)
{
	int temp;
	int i = 0;
	int j;
	while(i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if(tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
	return(tab);
}
int main(int argc, char *argv[])
{
	int i = 0;
	int n = argc -1;
	int *r = malloc(n * sizeof(int));

	while(i < n)
	{
		r[i] = atoi(argv[i + 1]);
		i++;
	}
	i = 0;
	sort_int_tab(r, n);
	while (i < n)
	{
		printf("%i\n", r[i]);
		i++;
	}
	return(0);
}