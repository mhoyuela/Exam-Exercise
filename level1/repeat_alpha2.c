/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-06 15:12:38 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-06 15:12:38 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void printchar(char c, int n)
{
	int i = 0;
	while (i <= n)
	{
		write(1, &c, 1);
		i++;
	}
}
int main(int argc, char * argv[])
{
	int i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] <= 'z' && argv[1][i] >= 'a')
		{
			printchar(argv[1][i], argv[1][i] - 'a');
		}
		else
			write(1, &argv[1][i], 1);
		i++;
	}
}