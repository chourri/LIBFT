/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chourri <chourri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:13:40 by chourri           #+#    #+#             */
/*   Updated: 2023/12/10 14:26:29 by chourri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_length(long number)
{
	int	size;

	size = 0;
	if (number == 0)
		return (1);
	if (number < 0)
	{
		number = -number;
		size++;
	}
	while (number > 0)
	{
		number /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	t_v	var;

	var.len = get_length(n);
	var.str = (char *)malloc(sizeof(char) * (var.len + 1));
	var.number = n;
	if (!var.str)
		return (NULL);
	if (var.number == 0)
	{
		var.str[0] = '0';
		var.str[1] = '\0';
	}
	else if (var.number < 0)
	{
		var.number = -var.number;
		var.str[0] = '-';
	}
	var.str[var.len] = '\0';
	while (var.number != 0)
	{
		var.str[var.len - 1] = (var.number % 10) + '0';
		var.number = var.number / 10;
		var.len--;
	}
	return (var.str);
}
