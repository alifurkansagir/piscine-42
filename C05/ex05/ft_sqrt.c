/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:25:54 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:26:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb == 1)
		return (1);
	while (sqrt <= 46340 && sqrt * sqrt <= nb)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}
