/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 19:16:17 by mel-gand          #+#    #+#             */
/*   Updated: 2022/12/31 19:16:20 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	sort_three(int *stack, int argc)
{
	if (argc == 3)
	{
		if (stack[2] < stack[1] && stack[0] < stack[2])
			rev_rotone(stack, argc, "rra\n");
		else if (stack[1] < stack[0] && stack[0] < stack[2])
			rotone(stack, argc, "ra\n");
		else if (stack[0] < stack[1] && stack[2] < stack[0])
		{
			rev_rotone(stack, argc, "rra\n");
			swap_one(stack, argc, "sa\n");
		}
		else if (stack[0] < stack[1] && stack[1] < stack[2])
		{
			rotone(stack, argc, "ra\n");
			swap_one(stack, argc, "sa\n");
		}
		else if (stack[1] < stack[2] && stack[1] < stack[0])
			swap_one(stack, argc, "sa\n");
		else
			return ;
	}
}

int	find_min(int *stack, int argc)
{
	int	i;
	int	min;
	int	position;

	i = 0;
	position = i;
	min = stack[i];
	while (i < argc)
	{
		i++;
		if (stack[i] < min)
		{
			min = stack[i];
			position = i;
		}
	}
	return (position);
}

void	push_min(int *stack_a, int *stack_b, int argc_a, int argc_b)
{
	int	pos;

	pos = find_min(stack_a, argc_a);
	if (pos == 1 || pos == 0)
	{
		while (pos-- >= 0)
			rev_rotone(stack_a, argc_a, "rra\n");
	}
	else if (pos == 2 || pos == 3)
	{
		while (pos++ < argc_a)
			rotone(stack_a, argc_a, "ra\n");
	}
}

void	sort_five(int *stack_a, int *stack_b, int argc_a, int argc_b)
{
	push_min(stack_a, stack_b, argc_a - 1, argc_b - 1);
	push_b(stack_a, &argc_a, stack_b, &argc_b);
	if (argc_a == 4)
	{
		push_min(stack_a, stack_b, argc_a - 1, argc_b - 1);
		push_b(stack_a, &argc_a, stack_b, &argc_b);
	}
	sort_three(stack_a, argc_a);
	push_a(stack_b, &argc_b, stack_a, &argc_a);
	push_a(stack_b, &argc_b, stack_a, &argc_a);
}
