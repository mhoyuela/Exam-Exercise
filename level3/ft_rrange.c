/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-30 16:52:24 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-30 16:52:24 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int i = 0;
	int *res = (int *)malloc(abs(end - start + 1) * sizeof(int));
	int j = abs(start- end);
	while (j >= i)
	{
		if (start < end)
		{
			res[i] = end;
			i++;
			end--;
		}
		else
		{
			res[i] = start;
			i++;
			start--;
		}
	}
	return (res);
}
int main()
{
	int i = 0;
	int *r = ft_rrange(2, -3);
	while (i < 5)
	{
		printf("%i", r[i]);
		i++;
	}
	return(0);
}