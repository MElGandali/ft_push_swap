/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:29:14 by mel-gand          #+#    #+#             */
/*   Updated: 2022/12/08 16:12:37 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_push_swap.h"

int	main(int argc, char **argv)
{
	int		i;
	char	**res;
	int		*store;
	int		count;

	i = 0;
	if (argc <= 1)
		return (0);
	res = ft_input(argc, argv, &count);
	store = malloc((count - 1) * sizeof(int));
	if (!store)
		return (0);
	while (i <= count - 1)
	{
		store[i] = ft_atoi(res[count - 1 - i]);
		i++;
	}
	ft_double(store, count);
}
