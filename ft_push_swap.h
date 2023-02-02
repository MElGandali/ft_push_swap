/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:49:52 by mel-gand          #+#    #+#             */
/*   Updated: 2023/01/27 15:04:40 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

#endif
//LIBRARIES

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(char *str);
void	ft_double(int *store, int argc);
void	ft_isdigit(char *join);
char	**ft_input(int argc, char **argv, int *count);
int		ft_sorting(int *stack_a, int argc_a);
int		ft_sorted(int *stack_a, int *stack_b, int argc_a);
void	swap_one(int *stack, int argc, char *c);
void	rotone(int *stack, int argc, char *c);
void	rev_rotone(int *stack, int argc, char *c);
void	push_a(int *stack_x, int *x_size, int *stack_y, int *y_size);
void	push_b(int *stack_x, int *x_size, int *stack_y, int *y_size);
void	sort_two(int *stack, int argc);
void	sort_three(int *stack, int argc);
int		find_min(int *stack, int argc);
void	push_min(int *stack_a, int *stack_b, int argc_a, int argc_b);
int		ft_memcmp(int *s1, int n);
int		ft_word_count(char const *s, char c);
char	**ft_split(char *s, char c);
char	*ft_substr(char *s, unsigned int start, int len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
int		ft_strlen(const char *str);
void	sort_five(int *stack_a, int *stack_b, int argc_a, int argc_b);
int		cnt_a_inst(int argc_a, int index);
int		cnt_b_inst(int val_a, int *stack_b, int argc_b, char c);
int		cnt_b_inst_utils(int valeur, int *stack_b, int argc_b);
int		min_of_stack_b(int *stack_b, int argc_b);
void	sort_big(int *stack_a, int *stack_b, int argc_a, int argc_b);
void	swap_both(int *stack_x, int *stack_y, int argc_x, int argc_y);
int		best_index(int *stack_a, int *stack_b, int argc_a, int argc_b);
void	move_corr_pos(int *stack_a, int *stack_b, int argc_a, int argc_b);
void	push_corr_pos(int *stack_a, int *stack_b, int argc_a, int argc_b);
void	push_corr_utils1(int res, int *stack_b, int argc_b, int op_b);
void	push_corr_utils2(int res, int *stack_b, int argc_b, int op_b);
