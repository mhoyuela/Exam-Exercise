/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-07-04 11:01:38 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-07-04 11:01:38 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ft_strpbrk(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		if (s1[i] == s2[j])
			return (&s1[i]);
		else
			j++;
		i++;
	}
	return(NULL);
}
#include <stdio.h>

int main()
{
	char *s1 = "hello bitches";
	char *s2 = "ll";
	printf("%s", ft_strpbrk(s1, s2));
	return (0);
}