/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-03 17:34:51 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-03 17:34:51 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int counter(int n)
{
	int i = 0;
	if (n < 0)
		n = -n;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
char *ft_itoa(int n)
{
	long int nbr = n;
	char *str;
	int len = counter(n);
	int is_negative = (nbr < 0);
	if (is_negative)
	{
		nbr = -nbr;
		len++;
	}
	str = malloc((len + 1) * (sizeof(char)));
	str[len] = '\0';
	if (nbr == 0)
	{
		str[0] = '0';
		return (str);
	}
	while (nbr)
	{
		//printf ("%s", str);
		--len;
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
int main()
{
	char *s = ft_itoa(1234);
	int i = 5;
	printf("%s", s);

	return (0);
}