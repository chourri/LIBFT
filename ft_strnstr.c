/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:05:37 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:36:46 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!s1 && !n)
		return (NULL);
	if (s2[i] == '\0')
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		k = i;
		j = 0;
		while (s1[k] && s2[j] && k < n && s1[k] == s2[j])
		{
			j++;
			k++;
		}
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}
