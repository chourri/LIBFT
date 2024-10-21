/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:19:20 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:36:52 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	j;

	j = ft_strlen(str);
	while (j >= 0)
	{
		if (str[j] == (char )c)
			return (&((char *)str)[j]);
		j--;
	}
	return (NULL);
}
