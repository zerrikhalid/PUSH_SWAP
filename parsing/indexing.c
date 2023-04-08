/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 03:34:18 by kzerri            #+#    #+#             */
/*   Updated: 2023/03/13 03:34:18 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*indexing(int *s, int len)
{
	int	i; 
	int	j;
	int	*ret;

	i = -1;
	ret = (int *)calloc(len, 4);
	while (++i < len)
	{
		j = len;
		while (j--)
		{
			if (s[i] > s[j])
				++ret[i];
		}
	}
	return (ret);
}
