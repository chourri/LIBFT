/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:25:01 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:32:43 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	e;

	i = 0;
	e = (unsigned char )c;
	s = (unsigned char *)str;
	while (i < n)
	{
		if (s[i] == e)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
