/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-06-22 16:08:42 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-06-22 16:08:42 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rev_print(char *str)
{
	int len = 0;
	int	i = 0;
	char *s;
	while (str[len] != '\0')
		len++;
	len--;
	while (len >= 0)
	{
		s[i] = str[len];
		write(1, &s[i], 1);
		len--;
	}
	write (1, "\n", 1);
}
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	char *s = argv[1];
	rev_print(s);
	return (0);
}