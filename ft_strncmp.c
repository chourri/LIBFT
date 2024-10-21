/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:06:46 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:36:36 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return ((unsigned char )str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
