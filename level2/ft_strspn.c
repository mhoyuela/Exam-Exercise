/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-06 14:19:38 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-06 14:19:38 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t j = 0;
	size_t count = 0;
	while (s[i] == accept[j])
	{
		i++;
		count++;
		if (s[i] != accept[j])
		{
			j++;
		}
		if (accept[j] == '\0')
			j = 0;
	}
	return (count);
}

#include <stdio.h>

int main()
{
	char *s = "mmahuevo";
	char *accept = "ma";
	printf("%zu", ft_strspn(s, accept));
	return (0);
}