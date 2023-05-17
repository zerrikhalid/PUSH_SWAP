/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 16:41:01 by kzerri            #+#    #+#             */
/*   Updated: 2023/05/13 20:44:09 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	if (!b)
		return (NULL);
	p = (unsigned char *)b;
	while (len--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	if (!s)
		return ;
	if (n != 0)
		ft_memset(s, 0, n);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *)malloc(size * count);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}
