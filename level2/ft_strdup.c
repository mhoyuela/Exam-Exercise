/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-04 10:42:02 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-04 10:42:02 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> 

char *ft_strdup(const char *s)
{
	int i = 0;
	char *c;
	while (s[i] != '\0')
		i++;
	c = malloc((i + 1) * sizeof(char));
	i = 0;
	while (s[i] != '\0')
	{
		c[i] = s[i];
		i++;
	}
	return (c);
}
#include <stdio.h>

int main()
{
	char *s = "comeme los huevos PUTA SEVILLA";
	printf("%s", ft_strdup(s));
	return (0);
}