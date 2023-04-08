/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_help.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kzerri <kzerri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 03:04:46 by kzerri            #+#    #+#             */
/*   Updated: 2023/02/27 18:41:07 by kzerri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_strlen(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*p;

	j = 0;
	if (!s1 && !s2)
		return (NULL);
	i = (ft_strlen(s1) + ft_strlen(s2));
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	while (s1[j])
	{
		p[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		p[j + i] = s2[i];
		i++;
	}
	p[j + i] = '\0';
	return (p);
}

char	*ft_strdup(char *s1)
{
	size_t	i;
	char	*p;
	size_t	j;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1);
	j = 0;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	while (j < i)
	{
		*(p + j) = *(s1 + j);
		j++;
	}
	*(p + j) = '\0';
	return (p);
}

int	ft_atoi(char *s)
{
	int	sign;
	int	nb;
	int	n;

	nb = 0;
	sign = 1;
	if (*s == '-' && s++)
		sign = -1;
	if (*s == '+')
		s++;
	while (*s)
	{
		n = (*s - 48);
		n *= sign;
		if (nb > (INT_MAX / 10) || (nb == (INT_MAX / 10) && n > 7))
			error(1);
		if (nb < (INT_MIN / 10) || (nb == (INT_MIN / 10) && n < -8))
			error(1);
		nb = nb * 10 + n;
		s++;
	}
	return (nb);
}
