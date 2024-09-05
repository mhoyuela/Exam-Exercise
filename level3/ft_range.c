/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-30 16:06:19 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-30 16:06:19 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	int j = abs(start- end);
	int *res = (int *)malloc(abs(end - start + 1) * sizeof(int));
	
	while (i <= j)
	{
		if(start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}
int main()
{
	int *r = ft_range(-1, -4);
	int i = 0;
	while (i <= 3) 
	{
		printf("%d", r[i]);
		i++;
	}
	return (0);
}