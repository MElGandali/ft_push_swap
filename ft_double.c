/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_double.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:55:35 by mel-gand          #+#    #+#             */
/*   Updated: 2023/01/26 18:55:37 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_double(int *store, int argc)
{
	if (ft_memcmp(store, argc - 1) == 1)
		ft_sorting(store, argc);
	else
	{
		free(store);
		write(2, "ERROR\n", 6);
		exit(1);
	}
}
