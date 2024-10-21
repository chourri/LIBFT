/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:59:23 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:25:46 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		signe;
	long	r;

	i = 0;
	signe = 1;
	r = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		if (signe == 1 && r > (LONG_MAX / 10))
			return (-1);
		else if (signe == -1 && r > (LONG_MAX / 10))
			return (0);
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * signe);
}
