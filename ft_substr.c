/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-gand <mel-gand@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:53:02 by mel-gand          #+#    #+#             */
/*   Updated: 2022/10/18 21:22:53 by mel-gand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

char	*ft_substr(char *s, unsigned int start, int len)
{
	int		i;
	char	*sub;
	int		j;

	if (start >= ft_strlen(s) || (!s))
		return (ft_strdup(""));
	if (start + len <= ft_strlen(s))
		sub = malloc(len + 1);
	else
		sub = malloc(ft_strlen(s) - start + 1);
	if (!sub)
		return (0);
	i = 0;
	j = start;
	while (j < len + start && s[j])
	{
		sub[i++] = s[j++];
	}
	sub[i] = '\0';
	return (sub);
}
