/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:43:56 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:34:29 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	char	*s;

	len = ft_strlen((char *)str) + 1;
	s = malloc(sizeof(char) * len);
	if (!s)
		return (NULL);
	s = (char *)ft_memcpy(s, str, len);
	return (s);
}
