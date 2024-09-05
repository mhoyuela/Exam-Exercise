/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-02 17:56:45 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-09-02 17:56:45 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	get_digit(char c, int n)
{
	char *base = "0123456789abcdef";
	char mybase[n];
	int max_digit;
	int i = n;

	while (i)
	{
		mybase[i] = base[i];
		i--;
	}
	max_digit = mybase[n]

	
}

int	ft_atoi_base(const char *str, int str_base)
{
	int	sign = 1;
	int i = 0;
	int digit;

	if (str == NULL || str_base < 2 || str_base > 16)
		return (0);
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (str[i])
	{
		digit = get_digit(to_lower(str[i]), str_base);

	}

	char *base = "0123456789abcdef";
	char mybase[str_base];

		

}