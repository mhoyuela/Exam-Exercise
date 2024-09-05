/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-15 14:26:08 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-15 14:26:08 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char a = 'a';
	while (str[j])
		j++;
	j--;
	while (i < j / 2)
	{
		a = str[i];
		str[i] = str[j - i];
		str[j - i] = a;
		i++;
	}
	return (str);
}
int main()
{
	char str[] = "culo hola";
	printf("%s", ft_strrev(str));
	return (0);
}