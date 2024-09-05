/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-03 17:21:05 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-03 17:21:05 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t j = 0;
	while (s[i] != '\0')
	{
		j = 0;
		if (reject[j] == s[i])
			return (i);
		else
			j++;
		i++;
	}
	return(i);
}
#include <stdio.h>

int main(int argc, char *argv[])
{
	char *s = argv[1];
	char *r = argv[2];
	ft_strcspn(s, r);
	printf("%zu", ft_strcspn(s, r));
	return (0);
}