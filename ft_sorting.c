/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:32:40 by mel-gand          #+#    #+#             */
/*   Updated: 2023/01/27 15:41:46 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort_two(int *stack, int argc)
{
	if (argc == 2)
	{
		if (stack[0] < stack[1])
			swap_one(stack, argc, "sa\n");
	}
}

int	ft_sorted(int *stack_a, int *stack_b, int argc_a)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= argc_a - 1 && j <= argc_a - 1)
	{
		if (stack_a[i] < stack_a[j])
			break ;
	i++;
	j++;
	}
	if (stack_a[i] < stack_a[j])
		return (1);
	else
		return (0);
}

int	ft_sorting(int *stack_a, int argc_a)
{
	int	*stack_b;
	int	argc_b;

	argc_b = 0;
	stack_b = malloc((argc_a - 1) * sizeof(int));
	if (!stack_b)
		return (0);
	if (ft_sorted(stack_a, stack_b, argc_a) == 0)
	{
		free (stack_a);
		free (stack_b);
		return (0);
	}
	if (argc_a == 2)
		sort_two(stack_a, argc_a);
	if (argc_a == 3)
		sort_three(stack_a, argc_a);
	if (argc_a == 5 || argc_a == 4)
		sort_five(stack_a, stack_b, argc_a, argc_b);
	if (argc_a > 5)
		sort_big(stack_a, stack_b, argc_a, argc_b);
	free (stack_a);
	free (stack_b);
	return (*stack_a);
}
