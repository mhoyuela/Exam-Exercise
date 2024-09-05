/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-04 15:47:07 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-04 15:47:07 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char *ft_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] ='\0';
	return (dest);
}
int main()
{
	char *src = "hola come vergas";
	char *dest = malloc(4 * (sizeof(char)));
	char *r = ft_strncpy(dest, src, 4);
	printf("%s", r);
	return (0);
}