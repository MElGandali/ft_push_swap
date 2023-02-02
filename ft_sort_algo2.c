/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_algo2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 16:29:25 by mel-gand          #+#    #+#             */
/*   Updated: 2023/01/27 14:55:52 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	cnt_a_inst(int argc_a, int index)
{
	int	cnt;
	int	j;

	cnt = 0;
	j = index;
	if (j >= argc_a / 2)
	{
		while (j++ < argc_a)
			cnt++;
	}
	else if (j < argc_a / 2)
	{
		while (j-- >= 0)
			cnt++;
	}
	return (cnt);
}

int	min_of_stack_b(int *stack_b, int argc_b)
{
	int	j;
	int	min;
	int	k;

	j = argc_b;
	min = stack_b[j];
	while (j >= 0)
	{
		if (min >= stack_b[j])
		{
			min = stack_b[j];
			k = j;
		}
		j--;
	}
	return (k);
}

int	cnt_b_inst_utils(int valeur, int *stack_b, int argc_b)
{
	int	i;
	int	cnt;

	i = argc_b;
	while (valeur < stack_b[i] && i > 0)
		i--;
	cnt = i;
	i--;
	while (i >= 0)
	{
		if (valeur > stack_b[i] && stack_b[i] > stack_b[cnt])
			cnt = i;
		i--;
	}
	return (cnt);
}

int	cnt_b_inst(int val_a, int *stack_b, int argc_b, char c)
{
	int	cnt;
	int	min;
	int	valeur;

	min = min_of_stack_b(stack_b, argc_b);
	if (val_a < stack_b[min] && min > argc_b / 2)
		cnt = argc_b - min + 1;
	else if (val_a < stack_b[min] && min <= argc_b / 2)
		cnt = min;
	else if (val_a > stack_b[min])
	{
		valeur = val_a;
		cnt = cnt_b_inst_utils(valeur, stack_b, argc_b);
		if (c == 'i')
			cnt = cnt;
		else if (cnt < argc_b / 2)
			cnt = cnt + 1;
		else if (cnt >= argc_b / 2)
			cnt = argc_b - cnt;
	}
	return (cnt);
}

int	best_index(int *stack_a, int *stack_b, int argc_a, int argc_b)
{
	int		i;
	int		min;
	int		j;
	char	c;

	i = argc_a;
	min = cnt_a_inst(argc_a, i) + cnt_b_inst(stack_a[i], stack_b, argc_b, c);
	j = i;
	while (i > 0)
	{
		if (min > cnt_a_inst(argc_a, i) + cnt_b_inst(stack_a[i], stack_b,
				argc_b, c))
		{
			min = cnt_a_inst(argc_a, i) + cnt_b_inst(stack_a[i], stack_b,
					argc_b, c);
			j = i;
		}
		i--;
	}
	return (j);
}
