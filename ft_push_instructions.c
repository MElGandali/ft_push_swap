/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swp_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:22:48 by mel-gand          #+#    #+#             */
/*   Updated: 2022/12/09 13:22:51 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_push_swap.h"

void	swap_one(int *stack, int argc, char *c)
{
	int	i;
	int	top;
	int	tmp;

	i = 0;
	while (i < argc)
		i++;
	top = i;
	tmp = stack[top];
	stack[top] = stack[top - 1];
	stack[top - 1] = tmp;
	write(1, c, 3);
}

void	rotone(int *stack, int argc, char *c)
{
	int	i;
	int	top;

	i = argc;
	top = stack[i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = top;
	write(1, c, 3);
}

void	rev_rotone(int *stack, int argc, char *c)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = stack[i];
	while (i < argc)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = tmp;
	write(1, c, 4);
}

void	push_a(int *stack_x, int *x_size, int *stack_y, int *y_size)
{
	if (*y_size > 0)
	{
		stack_y[*x_size] = stack_y[*y_size - 1];
		(*x_size)++;
		(*y_size)--;
	}
	write(1, "pa\n", 3);
}

void	push_b(int *stack_x, int *x_size, int *stack_y, int *y_size)
{
	if (*x_size > 0)
	{
		stack_y[*y_size] = stack_x[*x_size - 1];
		(*x_size)--;
		(*y_size)++;
	}
	write(1, "pb\n", 3);
}
