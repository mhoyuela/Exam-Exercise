/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 17:05:08 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-03 17:05:08 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	
	if (s1[i] == s2[j])
	{	
		i++;
		j++;
	}
	return (s1[i] - s2[j]);
}
#include <stdio.h>

int main()
{
	char *s1 = "holo";
	char *s2 = "holo";
	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	return (0);
}