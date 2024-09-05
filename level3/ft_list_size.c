/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhoyuela <mhoyuela@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-08-13 14:59:32 by mhoyuela          #+#    #+#             */
/*   Updated: 2024-08-13 14:59:32 by mhoyuela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	int i = 0;
	if (begin_list == 0)
		return (0);
	while(begin_list)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}