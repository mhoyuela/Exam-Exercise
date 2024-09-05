/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-05 14:05:24 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-05 14:05:24 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	char x = 'a';
	char *r = str;

	while (str[j] != '\0')
		j++;
	j--;
	while (i <= j)
	{
		//*r = str[j];
		x = str[j];
		str[j] = r[i];
		r[i] = x;
		j--;
		i++;
		//r++;
	}
	return (r);
}
#include <stdio.h>

int main()
{
	char str[] = "culo hola";
	printf("%s", ft_strrev(str));
	return (0);
}