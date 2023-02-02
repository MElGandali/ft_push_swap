/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 22:44:28 by mel-gand          #+#    #+#             */
/*   Updated: 2023/01/27 14:35:12 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	move_corr_pos(int *stack_a, int *stack_b, int argc_a, int argc_b)
{
	int	i;

	i = best_index(stack_a, stack_b, argc_a, argc_b);
	while (i >= argc_a / 2 && i < argc_a)
	{
		rotone(stack_a, argc_a, "ra\n");
		i++;
	}
	while (i < argc_a / 2 && i >= 0)
	{
		rev_rotone(stack_a, argc_a, "rra\n");
		i--;
	}
}

void	push_corr_utils1(int res, int *stack_b, int argc_b, int op_b)
{
	int	min_b;

	min_b = min_of_stack_b(stack_b, argc_b);
	while (min_b > argc_b / 2 && op_b > 0)
	{
		rotone(stack_b, argc_b, "rb\n");
		op_b--;
	}
	while (min_b <= argc_b / 2 && op_b > 0)
	{
		rev_rotone(stack_b, argc_b, "rrb\n");
		op_b--;
	}
}

void	push_corr_utils2(int res, int *stack_b, int argc_b, int op_b)
{
	int	min_b;
	int	i;

	min_b = min_of_stack_b(stack_b, argc_b);
	i = op_b;
	while (cnt_b_inst(res, stack_b, argc_b, 'i') >= argc_b / 2 && i > 0)
	{
		rotone(stack_b, argc_b, "rb\n");
		i--;
	}
	while (cnt_b_inst(res, stack_b, argc_b, 'i') < argc_b / 2 && i > 0)
	{
		rev_rotone(stack_b, argc_b, "rrb\n");
		i--;
	}
}

void	push_corr_pos(int *stack_a, int *stack_b, int argc_a, int argc_b)
{
	int	indx;
	int	min_b;
	int	op_b;
	int	i;
	int	res;

	indx = best_index(stack_a, stack_b, argc_a, argc_b);
	res = stack_a[indx];
	move_corr_pos(stack_a, stack_b, argc_a, argc_b);
	min_b = min_of_stack_b(stack_b, argc_b);
	op_b = cnt_b_inst(res, stack_b, argc_b, 'c');
	i = op_b;
	if (res < stack_b[min_b])
		push_corr_utils1(res, stack_b, argc_b, op_b);
	else if (res > stack_b[min_b])
		push_corr_utils2(res, stack_b, argc_b, op_b);
}

void	sort_big(int *stack_a, int *stack_b, int argc_a, int argc_b)
{
	push_b(stack_a, &argc_a, stack_b, &argc_b);
	push_b(stack_a, &argc_a, stack_b, &argc_b);
	while ((argc_a - 1) >= 0)
	{
		push_corr_pos(stack_a, stack_b, argc_a - 1, argc_b - 1);
		push_b(stack_a, &argc_a, stack_b, &argc_b);
	}
	while (min_of_stack_b(stack_b, argc_b - 1) <= argc_b / 2
		&& min_of_stack_b(stack_b, argc_b - 1) != 0)
		rev_rotone(stack_b, argc_b - 1, "rrb\n");
	while (min_of_stack_b(stack_b, argc_b - 1) > argc_b / 2
		&& min_of_stack_b(stack_b, argc_b - 1) != 0)
		rotone(stack_b, argc_b - 1, "rb\n");
	while (argc_b - 1 >= 0)
		push_a(stack_a, &argc_a, stack_b, &argc_b);
}
