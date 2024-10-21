/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:30:31 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:26:10 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size)
{
	void	*s;

	if (number && SIZE_MAX / number < size)
		return (NULL);
	s = malloc(number * size);
	if (!s)
		return (NULL);
	ft_bzero (s, number * size);
	return (s);
}
