/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 05:43:53 by mel-gand          #+#    #+#             */
/*   Updated: 2023/01/25 05:43:55 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

char	**ft_input(int argc, char **argv, int *count)
{
	char	**input;
	char	*join;
	int		i;
	char	c;

	i = 1;
	join = malloc(1);
	if (!join)
		return (0);
	while (i <= argc - 1)
	{
		join = ft_strjoin(join, argv[i]);
		i++;
	}
	ft_isdigit(join);
	*count = ft_word_count(join, ' ');
	i = 1;
	while (i <= *count - 1)
	{
		input = ft_split(join, ' ');
		i++;
	}
	free (join);
	return (input);
}
