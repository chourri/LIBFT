/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:17:53 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:33:04 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t len)
{
	unsigned char	*bytep;

	bytep = (unsigned char *)p;
	while (len > 0)
	{
		*bytep = (unsigned char)value;
		bytep++;
		len--;
	}
	return (p);
}
