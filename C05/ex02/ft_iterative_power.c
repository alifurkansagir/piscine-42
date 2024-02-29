/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 04:23:29 by marvin            #+#    #+#             */
/*   Updated: 2024/02/29 04:23:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_iterative_power(int nb, int power)
{
	int result;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
